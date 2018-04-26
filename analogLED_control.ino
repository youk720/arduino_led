int r;
int g;
int b;

void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); //緑LED
  pinMode(10, OUTPUT); //青LED
  pinMode(11, OUTPUT); //赤LED
  pinMode(A0, INPUT); //赤LED制御
  pinMode(A1, INPUT); //緑LED制御
  pinMode(A2, INPUT); //青LED制御
}

void loop(){
  {
  r = analogRead(A0); //赤LED制御アルゴリズム
  r = r / 4;
  analogWrite(11, r);
  g = analogRead(A1);
  g = g / 4;
  analogWrite(9, g); //緑LED制御アルゴリズム
  b = analogRead(A2);
  b = b / 4;
  analogWrite(10, b);  //青LED制御アルゴリズム
  delay(40);
  
  Serial.println(b); //数値モニタ(青のみ)
  }

}
