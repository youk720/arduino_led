#define rotary_a 2
#define rotary_b_left 4
#define rotary_b_cent 7 //準備用
#define rotary_b_right 8 //準備用
 byte r;
 byte g;
 byte b;
 

void setup(){
  pinMode(rotary_a, INPUT_PULLUP); // INPUT_PULLUPを使用することでマイコン内のプルアップ抵抗が有効になる
  pinMode(rotary_b_left, INPUT_PULLUP);
  pinMode(rotary_b_cent, INPUT_PULLUP); //準備用
  pinMode(rotary_b_right, INPUT_PULLUP);  //準備用
  pinMode(9, OUTPUT); //円LED(青)のピンに設定
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  }

void loop(){
    //エンコーダの値を取得するための変数宣言
  byte rotary_plus = 0;
  byte rotary_minus_L = 0;
  byte rotary_minus_C = 0;
  byte rotary_minus_R = 0;
//各エンコーダの状態取得
  rotary_plus = digitalRead(rotary_a);
  rotary_minus_L = digitalRead(rotary_b_left);
  rotary_minus_C = digitalRead(rotary_b_cent);
  rotary_minus_R = digitalRead(rotary_b_right);

   //赤用  

  if (rotary_plus == LOW) {
    r = constrain(r, 0, 250);
    r = r + 5;
    if (r == -5){
      r = 0;
    }
    } else if(rotary_minus_L == LOW){
      r = constrain(r, 5, 250);
      r = r - 5;
      }
      analogWrite(9, g);
      analogWrite(3, g);
  
  //緑用
  //a側に回った時か否かチェック
  if (rotary_plus == LOW) {
    g = constrain(g, 0, 250);
    g = g + 5;
    if (g == -5){
      g = 0;
    }
    } else if(rotary_minus_C == LOW){
      g = constrain(g, 5, 250);
      g = g - 5;
      }
      analogWrite(10, g);
      analogWrite(5, g);

  //青用
  //a側に回った時か否かチェック
  if (rotary_plus == LOW) {
    b = constrain(b, 0, 250);
    b = b + 5;
    if (b == -5){
      b = 0;
    }
    } else if(rotary_minus_R == LOW){
      b = constrain(b, 5, 250);
      b = b - 5;
      }
      analogWrite(11, b);
      analogWrite(6, b);
      Serial.println(b);
      delay(50);
  }
  
