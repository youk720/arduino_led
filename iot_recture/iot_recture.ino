int val = 0;
int iPin = A0;

void setup() {
  Serial.begin(115200);
  pinMode(iPin, INPUT);
}

void loop() {  
  val = analogRead(iPin);
  Serial.println(val);
  delay(200);
}
