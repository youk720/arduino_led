
int sensorPin = A4;    // select the input pin for the potentiometer
int G = 8;      // select the pin for the LED
int R = 12;
int Y = 13;
int sensorValue = 0;  // variable to store the value coming from the sensor
int r;
int g;
int b;

void setup() {
  // declare the ledPin as an OUTPUT:
//  Serial.begin(9600);
  pinMode(Y, OUTPUT);
  pinMode(9, OUTPUT); //緑LED
  pinMode(10, OUTPUT); //青LED
  pinMode(11, OUTPUT); //赤LED
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  
  pinMode(A2, INPUT); //赤LED制御
  pinMode(A1, INPUT); //緑LED制御
  pinMode(A0, INPUT); //青LED制御
  
}

void loop() {
  {
  // read the value from the sensor:
  sensorValue = analogRead(A3);
  // turn the ledPin on
  digitalWrite(G, HIGH);
  digitalWrite(R, LOW);
  digitalWrite(Y, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(G, LOW);
  digitalWrite(R, HIGH);
  digitalWrite(Y, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
  };
  {
  r = analogRead(A2); //赤LED制御アルゴリズム
  r = r / 4;
  analogWrite(11, r);
  g = analogRead(A1);
  g = g / 4;
  analogWrite(9, g); //緑LED制御アルゴリズム
  b = analogRead(A0);
  b = b / 4;
  analogWrite(10, b);  //青LED制御アルゴリズム
  delay(40);
  
//  Serial.println(b); //数値モニタ(青のみ)
  };
  
 }
