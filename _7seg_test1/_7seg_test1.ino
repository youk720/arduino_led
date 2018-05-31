#define A 8
#define B 9
#define C 10
#define D 11
#define DP 1
#define gnd_A 2
#define gnd_B 3

void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(gnd_A, OUTPUT);
  pinMode(gnd_B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    
  
    digitalWrite(gnd_A, HIGH);
    digitalWrite(gnd_B, LOW);
    controul();
    delay(1);
    digitalWrite(gnd_A, LOW);
    digitalWrite(gnd_B, HIGH);
    controul();
    delay(1);



}


int zero() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}
int one() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}

int two() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}
int tree() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}
int four() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
}
int five() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
}
int six() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
}
int seven() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
}
int eight() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
}
int nine() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
}

int controul() {
  int val = analogRead(A0);
  val = val / 10.2;
  Serial.println(val);
  if (val == 0) {
    zero();
  } else if (val >= 1 && val <= 10) {
     one();
  }else if (val >=  11 && val <= 20){
    two();
  }else if (val >= 21 && val <= 30){
    tree();
  }else if (val >= 31 && val <= 40){
    four();
  }else if (val >= 41 && val <= 50){
    five();
  }else if (val >= 51 && val <= 60){
    six();    
  }else if (val >= 61 && val <= 70){
    seven();
  }else if (val >= 71 && val <= 80){
    eight();        
  }else if (val >= 81 && val <= 99){
    nine();        
  }else if (val >= 91 && val <= 100){
    zero();
  }
}

