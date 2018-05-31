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

//(440) * (2 ** ((c - 69 +12) / 12);
//c = 60~

int oc = 1;

//接続系
#define sw_1 A0 //スイッチのピン定義
#define sw_2 A1 
#define speaker 10 //スピーカーピン

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sw = analogRead(sw_1); //ピン1番の定義
  int sw_oc = analogRead(sw_2); //オクターブ
//  Serial.println(sw);
  int x;
  int oc = 1;

  String key[] = {
    "non touch", "C# or D♭", "D# or E♭", "F# or G♭", "G# or A♭", "A# or B♭", "C+", "B", "A", "G", "F", "E", "D", "C-"
};
    
    
      if(sw >=940 && sw <= 960){
      x = 13; 
      tone(speaker, NOTE_C4 * oc);
      }else if(sw >= 936 && sw <= 940){
      x = 12;
      tone(speaker, NOTE_D4 * oc);
      }else if(sw >= 925 && sw <= 934){
      x = 11;
      tone(speaker, NOTE_E4 *oc);
      }else if(sw >= 916 && sw <= 926){
      x = 10;
      tone(speaker, NOTE_F4 * oc);
      }else if(sw >= 900 && sw <= 915){
      x = 9;
      tone(speaker, NOTE_G4 *oc);
      }else if(sw >= 885 && sw <= 899){
      x = 8;
      tone(speaker, NOTE_A4 * oc);
      }else if(sw >= 860 && sw <= 880){
      x = 7;
      tone(speaker, NOTE_B4 * oc);
      }else if(sw >= 850 && sw <= 865){
      x = 6;
      tone(speaker, NOTE_C5 * oc);
      }else if(sw >= 800 && sw <= 830){
      x = 5;
      tone(speaker, NOTE_AS4 * oc);
      }else if(sw >= 700 && sw <= 800){
      x = 4;
      tone(speaker, NOTE_GS4 * oc);
      }else if(sw >= 600 && sw <= 700){
      x = 3;
      tone(speaker, NOTE_FS4 * oc);
      }else if(sw >= 500 && sw <= 600){
      x = 2;
      tone(speaker, NOTE_DS4 * oc);
      }else if(sw >= 0 && sw <= 10){
      x = 1;
      tone(speaker, NOTE_CS4 * oc);
      }else{
        tone(speaker, -5000);
        noTone(speaker);
        }
      
      Serial.println(x);
      Serial.println(key[x]);
      delay(500);
    /*シリアル値測定結果
     * sw1C#=0~10
     * 2D#=500~600
     * 3F#=600~700
     * 4G#=700~800
     * 5A#=800~830
     * 6C+=850~865
     * 7B=860~880
     * 8A=885~899
     * 9G=900~915
     * 10F=916~926
     * 11E=925~934
     * 12D=936~940
     * 13C=940~960
     * 
     * 
     * 
     */
     if(sw_oc >= 600 && sw_oc <= 700){
      oc = oc + 1;
      }else if(sw_oc >= 500 && sw_oc <= 600){
      oc = oc - 1;
      }
     
}
      
