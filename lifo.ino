int r_in1 = 9, r_in2 = 6, l_in1 = 5, l_in2 = 3;
int left_sensor = 13, right_sensor = 12 , left_obstacle = HIGH, right_obstacle =  HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(r_in1,OUTPUT);
  pinMode(r_in2,OUTPUT);  
  pinMode(l_in1,OUTPUT);
  pinMode(l_in2,OUTPUT);
  pinMode(left_sensor,INPUT);
  pinMode(right_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  right_obstacle = digitalRead(right_sensor); // or (13)
  left_obstacle = digitalRead(left_sensor);
  if (left_obstacle == LOW && right_obstacle == LOW)
  {
    analogWrite(r_in1,250);
    analogWrite(r_in2,0);
    analogWrite(l_in1,250);
    analogWrite(l_in2,0);
    delay(10);
  }
  else if (left_obstacle == LOW && right_obstacle == HIGH) {
    analogWrite(r_in1,175);
    analogWrite(r_in2,0);
    analogWrite(l_in1,75);
    analogWrite(l_in2,0);
    delay(10);
  }
  else if (left_obstacle == HIGH && right_obstacle == LOW) {
    analogWrite(r_in1,75);
    analogWrite(r_in2,0);
    analogWrite(l_in1,175);
    analogWrite(l_in2,0);
    delay(10);
  }
  else if (left_obstacle == LOW && right_obstacle == LOW) {
    analogWrite(r_in1,0);
    analogWrite(r_in2,0);
    analogWrite(l_in1,0);
    analogWrite(l_in2,0);
    delay(10);
 }
}
