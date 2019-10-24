void servo1(){
  int delay1=random(400,1000);
   myservo.write(100);
  delay(delay1);
   myservo.write(10);
  delay (delay1);
}

void servo2(){
  int delay2=random(400,1000);
   myservo2.write(100);
  delay(delay2);
   myservo2.write(10);
  delay (delay2);
}
