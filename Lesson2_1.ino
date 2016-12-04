//ask the class how to get the light to blink.
int redLED=9;
int onTime=500;
int offTime=500;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(onTime);
digitalWrite(redLED,LOW);
delay(offTime);

}

//have class plug in a second LED into the breadboard and look at the result. Ask what do they think will happen?
