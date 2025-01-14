int delayTime=100;
void setup() 
{
 pinMode(13, OUTPUT); 

}

void loop() {
 digitalWrite(13, HIGH);
 delay(delayTime);
 digitalWrite(13, LOW);
 delay(delayTime);
 
 //delayTime= delayTime+50;

 //if(delayTime >1500)
//  {
// delayTime=0;
//  }

}
