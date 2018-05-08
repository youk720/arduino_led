#define ENC_A  2
#define ENC_B  4
 
volatile byte pos;
volatile int  enc_count;
 
#define LED_SW  A0
#define LED_SIZE 3
const byte led_pin[LED_SIZE]  = {10, 11, 9};   // digital pins for LED
byte       led_luma[LED_SIZE] = {255, 255}; // luma for each LED
boolean    sw = false;
 
 
void setup() {
  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
 
  attachInterrupt(0, ENC_READ, CHANGE);
  attachInterrupt(1, ENC_READ, CHANGE);
 
  Serial.begin(9600);
 
  for (byte i = 0 ; i < LED_SIZE ; i++)
  {
    pinMode(led_pin[i], OUTPUT);
    analogWrite(led_pin[i], led_luma[i]);
  }
  pinMode(LED_SW, INPUT_PULLUP);
  SERIAL_MON();
}
 
 
void loop() {
 
  // LED switch change
  unsigned long gauge;
  while (!digitalRead(LED_SW)) gauge++;
  if (gauge > 700)
  {
    sw = !sw;
    SERIAL_MON();
  }
 
  // set led_luma of active LED
  short led_ref = ENC_COUNT(led_luma[sw]);
  led_ref = constrain(led_ref, 0, 255);
 
  // excute luma change
  if (led_luma[sw] != led_ref)
  {
    led_luma[sw] = led_ref;
    analogWrite(led_pin[sw], led_luma[sw]);
    SERIAL_MON();
  }
}
 
 
void SERIAL_MON() {
  for (byte i = 0 ; i < LED_SIZE ; i++)
  {
    Serial.print((char)(i + 'A'));
    Serial.print(":");
    Serial.print(led_luma[i]);
    if (sw == i) Serial.print("< ");
    else Serial.print("  ");
  }
  Serial.println();
}
 
 
int ENC_COUNT(int incoming) {
  static int enc_old = enc_count;
  int val_change = enc_count - enc_old;
 
  if (val_change != 0)
  {
    incoming += val_change;
    enc_old   = enc_count;
  }
  return incoming;
}
 
 
void ENC_READ() {
  byte cur = (!digitalRead(ENC_B) << 1) + !digitalRead(ENC_A);
  byte old = pos & B00000011;
  byte dir = (pos & B00110000) >> 4;
 
  if (cur == 3) cur = 2;
  else if (cur == 2) cur = 3;
 
  if (cur != old)
  {
    if (dir == 0)
    {
      if (cur == 1 || cur == 3) dir = cur;
    } else {
      if (cur == 0)
      {
        if (dir == 1 && old == 3) enc_count++;
        else if (dir == 3 && old == 1) enc_count--;
        dir = 0;
      }
    }
    pos = (dir << 4) + (old << 2) + cur;
  }
}
