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
