int r_in1 = 9, r_in2 = 6, l_in1 = 5, l_in2 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(r_in1,OUTPUT);
  pinMode(r_in2,OUTPUT);  
  pinMode(l_in1,OUTPUT);
  pinMode(l_in2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(r_in1,0);
  analogWrite(r_in2,200);
  analogWrite(l_in1,0);
  analogWrite(l_in2,200);
  
  delay(1000);
  
  
  
}
