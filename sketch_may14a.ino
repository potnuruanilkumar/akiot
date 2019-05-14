int switchPin=0;
int LedPin=16;
int switchValue;
void setup() {
pinMode(LedPin,OUTPUT);
pinMode(switchPin,INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
  switchValue=digitalRead(switchPin);
  digitalWrite(LedPin,!switchValue);

}
