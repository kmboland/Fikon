int LEDPin=13;


void setup() {
  // put your setup code here, to run once:
pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite (LEDPin, HIGH);
//Cannot tell the LED is on or off. Needs a delay parameter for both HIGH and LOW. 
//delay (1000);
digitalWrite (LEDPin, LOW);
//delay(1000);


}
