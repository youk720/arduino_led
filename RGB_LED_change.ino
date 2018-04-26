int i;
int R;
int B;
int G;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT); //緑
  pinMode(10, OUTPUT); //青
  pinMode(11, OUTPUT); //赤
  //それぞれのLEDのピン設定
}

// the loop function runs over and over again forever
void loop() {
  for(i=0;i<=255;i++){
    analogWrite(11, 255-i); //赤を徐々に暗く
    analogWrite(10, i); //青を徐々に明るく
    analogWrite(9, 0);
    delay(10);
  }
  for(i=0;i<=255;i++){
    analogWrite(11, 0); //赤を徐々に暗く
    analogWrite(10, 255-i); //青を徐々に明るく
    analogWrite(9, i);
    delay(10);
  }for(i=0;i<=255;i++){
    analogWrite(11, i); //赤を徐々に暗く
    analogWrite(10, 0); //青を徐々に明るく
    analogWrite(9, 255-i);
    delay(10);
  }
}
//    R = 255;
//    B = 255;
//    G = 0;
//    analogWrite(11, R); //赤を徐々に暗く
//    analogWrite(10, B); //青を徐々に明るく
//    analogWrite(9, G);
//    delay(100);
//}
