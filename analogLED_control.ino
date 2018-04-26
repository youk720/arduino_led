int r;
int g;
int b;
//参考資料
//http://monolizm.com/sab/pdf/%E7%AC%AC15%E5%9B%9E_%E3%83%97%E3%83%AC%E3%82%BC%E3%83%B3%E8%B3%87%E6%96%99(%E3%82%A2%E3%83%8A%E3%83%AD%E3%82%B0%E5%85%A5%E5%87%BA%E5%8A%9B%E7%B7%A8).pdf

void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); //緑LED
  pinMode(10, OUTPUT); //青LED
  pinMode(11, OUTPUT); //赤LED
  pinMode(A2, INPUT); //赤LED制御
  pinMode(A1, INPUT); //緑LED制御
  pinMode(A0, INPUT); //青LED制御
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
