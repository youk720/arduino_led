#define A 1
#define B 2
#define C 3

void setup() {
  // put your setup code here, to run once:
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Y0();
 delay(80);
 Y1();
 delay(80);
 Y2();
 delay(80);
 Y3();
 delay(80);
 Y4();
 delay(80);
 Y5();
 delay(80);
 Y6();
 

//  Y1();
}

int Y0(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  }
int Y1(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  }
int Y2(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  }
int Y3(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  }
int Y4(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  }
int Y5(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  }
int Y6(){ 
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  }

