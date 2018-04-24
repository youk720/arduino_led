int analogpin_up = 5;
int analogpin_down = 4;
int val = 0;
int val2 = 0;
int old_val = 0;
int old_val2 = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() { 
  {


val = analogRead(analogpin_up);     //入力ピンの読み取り
  Serial.println(val%10);             //値の表示
  delay(100);
  val = analogRead(analogpin_down);     //入力ピンの読み取り
  Serial.println(val2%10);             //値の表示
  delay(100);
   
  }
}
