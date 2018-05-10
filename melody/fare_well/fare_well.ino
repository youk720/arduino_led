#define one_haku 500   // 4分音符分
#define eight_haku 250 //8分音符分
#define twelv_haku 125 //12分音符分
#define pin 10   // ブザーを接続したピン番号


//ドレミを定義
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978



void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
sumire();
  }

void summer_color(){ //夏色の時間 JR新宿駅4番線発車メロディ
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_E6,one_haku); //ミ
  delay(one_haku);
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_E6,one_haku); //ミ
  delay(one_haku);
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_E6,one_haku); //ミ
  delay(one_haku);
  tone(pin,NOTE_F6,eight_haku); //ファ
  delay(eight_haku);
  tone(pin,NOTE_C6,one_haku); //ド
  delay(one_haku);
  tone(pin,NOTE_E5 ,twelv_haku); //ミ
  delay(twelv_haku);
  tone(pin,NOTE_G5 ,twelv_haku); //ソ
  delay(twelv_haku);
  tone(pin,NOTE_C6 ,twelv_haku); //ど
  delay(twelv_haku);
  tone(pin,NOTE_E6 ,one_haku); //ミ
  delay(one_haku);


  delay(1000);
}
  void tobu(){  //東武野田線汎用メロディ？
    tone(pin,NOTE_F5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_C5,twelv_haku);
    delay(twelv_haku);
    tone(pin,NOTE_DS5,twelv_haku);
    delay(twelv_haku);
    tone(pin, NOTE_F5,eight_haku);
    delay(eight_haku);
    tone(pin, NOTE_C5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_G5,twelv_haku);
    delay(twelv_haku);
    tone(pin,NOTE_A5,twelv_haku);
    delay(twelv_haku);
    tone(pin,NOTE_C6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_G5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_D6,twelv_haku);
    delay(twelv_haku);
    tone(pin,NOTE_E6,twelv_haku);
    delay(twelv_haku);
    tone(pin,NOTE_G6,1000);
    delay(1000);

    delay(100);

    }
  void sumire(){
    //低音ver
//    tone(pin,NOTE_D4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_C4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_AS3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_D4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_F4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_F3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_A3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_AS3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_D4,one_haku);
//    delay(one_haku);
//    tone(pin,NOTE_G4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_F3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_A3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_AS3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_D4,one_haku);
//    delay(one_haku);
//    tone(pin,NOTE_G4,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_F3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_A3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_AS3,eight_haku);
//    delay(eight_haku);
//    tone(pin,NOTE_D4,one_haku);
//    delay(one_haku);
//   tone(pin,NOTE_A4,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_F3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_A3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_AS3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_F4,one_haku);
//   delay(one_haku);
//   tone(pin,NOTE_D4,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_F3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_A3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_AS3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_D4,one_haku);
//   delay(one_haku);
//   tone(pin,NOTE_F3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_D3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_F3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_A3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_D4,one_haku);
//   delay(one_haku);
//   tone(pin,NOTE_AS3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_F3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_A3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_AS3,eight_haku);
//   delay(eight_haku);
//   tone(pin,NOTE_D4,one_haku);
//   delay(one_haku);
    
    //高音ver
    tone(pin,NOTE_D6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_C6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_AS5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_D6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_F6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_F5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_A5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_AS5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_D6,one_haku);
    delay(one_haku);
    tone(pin,NOTE_G6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_F5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_A5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_AS5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_D6,one_haku);
    delay(one_haku);
    tone(pin,NOTE_G6,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_F5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_A5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_AS5,eight_haku);
    delay(eight_haku);
    tone(pin,NOTE_D6,one_haku);
    delay(one_haku);
   tone(pin,NOTE_A6,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_F5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_A5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_AS5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_F6,one_haku);
   delay(one_haku);
   tone(pin,NOTE_D6,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_F5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_A5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_AS5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_D6,one_haku);
   delay(one_haku);
   tone(pin,NOTE_F5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_D5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_F5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_A5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_D6,one_haku);
   delay(one_haku);
   tone(pin,NOTE_AS5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_F5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_A5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_AS5,eight_haku);
   delay(eight_haku);
   tone(pin,NOTE_D6,one_haku);
   delay(one_haku);

    delay(500);
    }

   void fare()  { //farewell JR新宿駅2番線発車メロディ https://youtu.be/pE9fJyBUxns?t=1m2s
      tone(pin,NOTE_F5,one_haku); //ファ
      delay(one_haku);
      tone(pin,NOTE_C5,one_haku); //ど
      delay(one_haku);
      tone(pin,NOTE_C5,eight_haku); //ど
      delay(eight_haku);
      tone(pin,NOTE_F5,eight_haku); //ファ
      delay(eight_haku);
      tone(pin,NOTE_E5,eight_haku); //ミ
      delay(eight_haku);
      tone(pin,NOTE_D5,eight_haku); //レ
      delay(eight_haku);
      tone(pin,NOTE_E5,one_haku); //み
      delay(one_haku);
      tone(pin,NOTE_B4,one_haku); //シ
      delay(one_haku);
      tone(pin,NOTE_C5,eight_haku); //ド
      delay(eight_haku);
      tone(pin,NOTE_E5,eight_haku); //ミ
      delay(eight_haku);
      tone(pin,NOTE_D5,eight_haku); //レ
      delay(eight_haku);
      tone(pin,NOTE_C5,eight_haku); //ド
      delay(eight_haku);
      tone(pin,NOTE_D5,one_haku); //レ
      delay(one_haku);
      tone(pin,NOTE_A4,eight_haku); //ラ
      delay(eight_haku);
      tone(pin,NOTE_GS4,eight_haku); //ラ♯
      delay(eight_haku);
      tone(pin,NOTE_D5,eight_haku); //レ
      delay(eight_haku);
      tone(pin,NOTE_C5,one_haku); //ド
      delay(one_haku);
      tone(pin,NOTE_B4,eight_haku); //シ
      delay(eight_haku);
      tone(pin,NOTE_C5,one_haku); //ド
      delay(one_haku);
      tone(pin,NOTE_C5,one_haku); //ド
      delay(one_haku);
      tone(pin,NOTE_C5,twelv_haku); //ド
      delay(twelv_haku);
      tone(pin,NOTE_E5,twelv_haku); //ミ
      delay(twelv_haku);
      tone(pin,NOTE_G5,twelv_haku); //ソ
      delay(twelv_haku);
      tone(pin,NOTE_C6,one_haku); //ド(オクターブ↑)
      delay(one_haku);

     delay(1000);
 }

 void kimi(){ //前前前世 単一メロディ
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_F7,one_haku); //ファ
   delay(one_haku);
   tone(pin,NOTE_F7,one_haku); //ファ
   delay(one_haku);
   tone(pin,NOTE_F7,one_haku); //ファ
   delay(one_haku);
   tone(pin,NOTE_D7,eight_haku); //レ
   delay(eight_haku);
   tone(pin,NOTE_C7,eight_haku); //ド
   delay(one_haku);
   tone(pin,NOTE_C7,eight_haku); //ド
   delay(one_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(one_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_AS6,eight_haku); //ラ#|シ♭
   delay(eight_haku);
   tone(pin,NOTE_F7,eight_haku); //ファ
   delay(eight_haku);
   tone(pin,NOTE_F7,one_haku); //ファ
   delay(one_haku);
   tone(pin,NOTE_F7,eight_haku); //ファ
   delay(eight_haku);
   tone(pin,NOTE_F7,eight_haku); //ファ
   delay(eight_haku);
   tone(pin,NOTE_D7,eight_haku); //レ
   delay(eight_haku);
   tone(pin,NOTE_D7,eight_haku); //レ
   delay(eight_haku);
   tone(pin,NOTE_C7,1000); //ド
   delay(1000);

   delay(500);
   }
                                                                                                                                                                                                                  
