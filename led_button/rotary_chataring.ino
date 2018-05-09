#define ENC_A 2
#define ENC_B 8
 
volatile byte pos;
 
 
void setup() {
  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
 
  attachInterrupt(0, ENC_READ, CHANGE);
  attachInterrupt(5, ENC_READ, CHANGE);
 
  Serial.begin(9600);
}
 
 
void loop() {}
 
 
void ENC_READ() {
  byte cur = (!digitalRead(ENC_B) << 1) + !digitalRead(ENC_A);
  byte old = pos & B00000011;
 
  if (cur == 3) cur = 2;
  else if (cur == 2) cur = 3;
 
  if (cur != old)
  {
    bool rote = 0;
    if (cur == 3 && old == 0) rote = 0;
    else if (cur == 0 && old == 3) rote = 1;
    else if (cur > old) rote = 1;
 
    pos = (old << 2) + cur;
 
    const char vector[2] = {'<', '>'};
    Serial.print(vector[rote]);
    Serial.println(pos + (1 << 7), BIN);
    if (cur == 0) Serial.println();
  }
}
