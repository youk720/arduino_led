
int sensorPin = A4;    // select the input pin for the potentiometer
int G = 8;      // 点滅緑
int R = 12;     //点滅赤
int Y = 13;     //点滅黄
int sensorValue = 0;  // variable to store the value coming from the sensor
int r;    //フルカラー赤
int g;    //フルカラー緑
int b;    //フルカラー青

void setup() {
  // declare the ledPin as an OUTPUT:
//  Serial.begin(9600);
  pinMode(Y, OUTPUT); //
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
  // 赤|緑黄点滅制御
  sensorValue = analogRead(A3); //点滅時間を抵抗の値に代入
  // turn the ledPin on
  digitalWrite(G, HIGH); //緑点灯
  digitalWrite(R, LOW); //赤消灯
  digitalWrite(Y, HIGH);  //黄点灯
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(G, LOW);　//緑消灯
  digitalWrite(R, HIGH);  //赤点灯
  digitalWrite(Y, LOW); //黄消灯
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue); 
  };
  {
  r = analogRead(A2); //赤LED制御アルゴリズム
  r = r / 4;  //255までのレベルに計算 
  analogWrite(11, r); // 255の数字を代入
  g = analogRead(A1);
  g = g / 4;
  analogWrite(9, g); //緑LED制御アルゴリズム
  b = analogRead(A0);
  b = b / 4;
  analogWrite(10, b);  //青LED制御アルゴリズム
  delay(40);
  
  };
  
 }
