#define blue 9
#define green 10
#define sw 7

int val = 0;
int old_val = 0;
boolean count_x = false;
 
void setup(){
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(sw, INPUT_ PULLUP);

  Serial.println(9600);
 }

void loop(){
  val = digitalRead(sw);
  Serial.println(val);
  
  if(val == HIGH && old_val == LOW){
   count_x = !count_x;
    } 

    old_val = val;
    
  if (count_x){
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    }else{
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
      }
  }
