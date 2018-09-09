#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10
double duration,distance;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  Serial.println(duration);
  distance = 340*pow(10,-6)*(duration/2);
  Serial.println("distance in meters:");
  Serial.println(distance);
  if(distance < 1) {
    Serial.println("Object detected ,TOO CLOSE");
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
  }
  else {
    Serial.println("Safe distance");
    digitalWrite(led2,HIGH);
    digitalWrite(led,LOW);
  }
  delay(500);
}
 
