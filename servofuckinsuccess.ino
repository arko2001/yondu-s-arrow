#include <Servo.h>
Servo myServo;
//int jen;
int servoPin=9;
int servoPos=0;
String msg ="Enter the perfect angle";
void setup(){
  //put your setup code here to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
 
}
void loop() {
  Serial.println(msg);
  while(Serial.available()== 0) {
  }
  servoPos = Serial.parseInt();
  if (servoPos >150 && servoPos < 200)
{
    Serial.println("Arko foreward");
    Serial.println(servoPos);
    myServo.write(180);
    delay (200);
    myServo.write(90);
    }
    else if (servoPos <100 && servoPos > 50){
     Serial.println("Arko backward");
     Serial.println(servoPos);
    myServo.write(0);
    delay(200);
    myServo.write(90);

   
    }
    else{
    Serial.println("oh boy");
    Serial.println(servoPos);
    }
  }
