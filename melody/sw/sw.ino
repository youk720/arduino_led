#define led_1 3  //LEDのピン定義
#define led_2 4
#define led_3 5
#define led_4 6
#define sw_1 A0 //スイッチのピン定義 
#define sw_2 A1 //鍵盤のスイッチは計13個あるので4つ一ピンで分圧回路作成
#define sw_3 A2
#define sw_4 A3

void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT); //LEDピンをoutput
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value_1 = analogRead(sw_1); スイッチピン1番の定義
//  value = value % 1000;
  Serial.println(value_1);

  if(value_1 >= 700 && value_1 <= 800){ //sw4の場合
    digitalWrite(led_1, HIGH); //青作動
  } else if (value_1 >= 600 && value_1 <= 700){ //sw3の場合
    digitalWrite(led_2, HIGH); //黄色作動
    } else if(value_1 >=500 && value_1 <= 600){ //sw2の場合
      digitalWrite(led_3, HIGH); //赤作動
      } else if (value_1 == 0){ //sw1の場合
        digitalWrite(led_4, HIGH); //緑作動
        } else { //上の処理以外なら非動作
         digitalWrite(led_1, LOW);
         digitalWrite(led_2, LOW);
         digitalWrite(led_3, LOW); 
         digitalWrite(led_4, LOW); 
          }
  
}
