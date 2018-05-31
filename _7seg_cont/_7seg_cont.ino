#define A 1
#define B 2
#define C 3

void setup() {
  // put your setup code here, to run once:

  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  val = val / 10.2;
  Serial.println(val);
}
