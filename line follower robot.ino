int ENA = 3;
int IN1 = 5;
int IN2 = 6;
int IN3 = 9;
int IN4 = 10;
int ENB = 11;
int SR = A0;
int SL = A1;
void setup() {
pinMode(IN1 , OUTPUT);
pinMode(IN2 , OUTPUT);
pinMode(IN3 , OUTPUT);
pinMode(IN4 , OUTPUT);
pinMode(SR , INPUT);
pinMode(SL , INPUT);
}

void loop() {
  if(digitalRead(SR) == 0 && digitalRead(SL) == 0)
  {
    analogWrite(ENA , 200);
    digitalWrite(IN1 , 1);
    digitalWrite(IN2 , 0);
    digitalWrite(IN3 , 1);
    digitalWrite(IN4 , 0);
    analogWrite(ENB , 200);
  }
  else if(digitalRead(SR) == 1 && digitalRead(SL) == 0)
  {
    analogWrite(ENA , 200);
    digitalWrite(IN1 , 1);
    digitalWrite(IN2 , 0);
    digitalWrite(IN3 , 0);
    digitalWrite(IN4 , 0);
    analogWrite(ENB , 0);
  }
  else if(digitalRead(SR) == 0 && digitalRead(SL) == 1)
  {
    analogWrite(ENA , 0);
    digitalWrite(IN1 , 0);
    digitalWrite(IN2 , 0);
    digitalWrite(IN3 , 1);
    digitalWrite(IN4 , 0);
    analogWrite(ENB , 200);
  }
  else
  {
    analogWrite(ENA , 0);
    digitalWrite(IN1 , 0);
    digitalWrite(IN2 , 0);
    digitalWrite(IN3 , 0);
    digitalWrite(IN4 , 0);
    analogWrite(ENB , 0);
  }
}
