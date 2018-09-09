int r_in1 = 9,r_in2 = 6,l_in1 = 5,l_in2 = 3;
char x;
void front() {
  analogWrite(r_in1,255);
  analogWrite(r_in2,0);
  analogWrite(l_in1,255);
  analogWrite(l_in2,0);
  delay(10);
}
void left() {
  analogWrite(r_in1,100);
  analogWrite(r_in2,0);
  analogWrite(l_in1,0);
  analogWrite(l_in2,0);
  delay(10);
}
void right() {
  analogWrite(r_in1,0);
  analogWrite(r_in2,0);
  analogWrite(l_in1,100);
  analogWrite(l_in2,0);
  delay(10);
}
void back(){
  analogWrite(r_in1,0);
  analogWrite(r_in2,255);
  analogWrite(l_in1,0);
  analogWrite(l_in2,255);
  delay(10);
}
void terminal() {
  analogWrite(r_in1,0);
  analogWrite(r_in2,0);
  analogWrite(l_in1,0);
  analogWrite(l_in2,0);
  delay(10);
  
}
void setup() {
  // put your setup code here, to run once:
  pinMode(r_in1,OUTPUT);
  pinMode(r_in2,OUTPUT);  
  pinMode(l_in1,OUTPUT);
  pinMode(l_in2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() != 0) {
    x = Serial.read();
    Serial.println(x);
    if ( x == 'F') 
      front();
    else if(x == 'B')  
      back();
    else if(x == 'L')
      left();
     else if(x == 'R')
      right();
      }
 }
