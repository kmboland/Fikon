int LEDPin=13;
int waitTime=250;
//Can switch the waitTime to 250 for quick blink.

void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (LEDPin, HIGH);
//Cannot tell the LED is on or off. Needs a delay parameter for both HIGH and LOW. 
delay (waitTime);
digitalWrite (LEDPin, LOW);
delay(waitTime);


}
