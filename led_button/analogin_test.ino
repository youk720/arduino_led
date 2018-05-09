int r;

//参考資料↓
//http://monolizm.com/sab/pdf/%E7%AC%AC15%E5%9B%9E_%E3%83%97%E3%83%AC%E3%82%BC%E3%83%B3%E8%B3%87%E6%96%99(%E3%82%A2%E3%83%8A%E3%83%AD%E3%82%B0%E5%85%A5%E5%87%BA%E5%8A%9B%E7%B7%A8).pdf

void setup(){
  Serial.begin(9600);
  
}

void loop(){
r = analogRead(A0);
Serial.println(r);
delay(500);
}
