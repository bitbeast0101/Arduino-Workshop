int sense = 10, obstacle = HIGH;
void setup() {
  // put your setup code here, to run once:
  pinMode(sense,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  obstacle = digitalRead(sense);
  Serial.println(obstacle);
  if ( obstacle == LOW) 
    Serial.println("PATH CLEAR");
  else
    Serial.println("OBSTACLE DETECTED");
  delay(500);
}
