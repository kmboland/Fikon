int LEDPin=13;
int waitTimeOn=100;
int waitTimeOff=900;
//reverse the waitTime's to show light on most the time. 

void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (LEDPin, HIGH);
delay (waitTimeOn);
digitalWrite (LEDPin, LOW);
delay(waitTimeOff);


}
