int led=13;
void setup(){
pinMode(led,OUTPUT);//sets the built in LED as an output device
}
void loop(){
digitalWrite(led,HIGH);//turns on the built in LED
delay(100);//generates a dealy of 100ms
digitalWrite(led,LOW);//turns off the built in LED
delay(100);//generates a delay of 100ms
}
