#define trigPin 13
#define echoPin 12
double duration,duration_s;
double distance;

void setup() {
  // put your setup code here, to run once:
  
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
Serial.println("duration in Microseconds:" );
Serial.println(duration);
distance = 340*pow(10,-6)*(duration/2);
Serial.println("distance in meters:");
Serial.println(distance);
if(duration > 5800) 
Serial.println("Far");
else 
Serial.println("detected");
delay(500);
}



