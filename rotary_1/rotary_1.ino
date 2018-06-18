#define A 2
#define B 3
#define led_1 6
#define led_2 7

void setup() {
  // put your setup code here, to run once:
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val_A = digitalRead(A);
  int val_B = digitalRead(B);
  if(val_A == HIGH){
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
    }else if(val_B == HIGH){
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH); 
      }
}
