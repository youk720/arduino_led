#define sw A0
#define blue 9
#define green 10
int val = 0;
int old_val = 0;

//http://tsukutta.hatenablog.com/entry/2013/05/30/150231


void setup() {
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(sw, INPUT);

  Serial.println(9600);
}

void loop() {
  int value = analogRead(sw);
    
    if(value == HIGH){
      digitalWrite(blue, HIGH);
      }else{
      digitalWrite(green, HIGH);
      }
}
