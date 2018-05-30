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
}

void loop() {
  // put your main code here, to run repeatedly:

{
  digitalWrite(gnd_A, HIGH);
  digitalWrite(gnd_B, LOW);
  eight();
  delay(10);
  digitalWrite(gnd_A, LOW);
  digitalWrite(gnd_B, HIGH);
  eight();
  delay(10);
  }
}


int zero(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  }
int one(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  }

int two(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  }
int tree(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  }
int four(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  }
int five(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  }
int six(){
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  }
int seven(){
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  }
int eight(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  }
int nine(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
}


