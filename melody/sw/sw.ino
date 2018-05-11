#define sw_1 A0 //スイッチのピン定義 
#define sw_2 A1 //鍵盤のスイッチは計13個あるので4つ一ピンで分圧回路作成
#define sw_3 A2
#define sw_4 A3



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sw = analogRead(sw_1); //ピン1番の定義
//  Serial.println(sw);
  int x;

  String key[] = {
    "non touch", "C# or D♭", "D# or E♭", "F# or G♭", "G# or A♭", "A# or B♭", "C+", "B", "A", "G", "F", "E", "D", "C-"
};
    
      if(sw >=940 && sw <= 960){
      x = 13; 
      }else if(sw >= 936 && sw <= 940){
      x = 12;
      }else if(sw >= 925 && sw <= 934){
      x = 11;
      }else if(sw >= 916 && sw <= 926){
      x = 10;
      }else if(sw >= 900 && sw <= 915){
      x = 9;
      }else if(sw >= 885 && sw <= 899){
      x = 8;
      }else if(sw >= 860 && sw <= 880){
      x = 7;
      }else if(sw >= 850 && sw <= 865){
      x = 6;
      }else if(sw >= 800 && sw <= 830){
      x = 5;
      }else if(sw >= 700 && sw <= 800){
      x = 4;
      }else if(sw >= 600 && sw <= 700){
      x = 3;
      }else if(sw >= 500 && sw <= 600){
      x = 2;
      }else if(sw >= 0 && sw <= 10){
      x = 1;
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
     */
}
