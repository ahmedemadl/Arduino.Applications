int redPin=12;
int micSensorPin=9;
int micState;
int T= 1000;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
pinMode(micSensorPin, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
micState=digitalRead(micSensorPin);
if (micState==HIGH)
{
  digitalWrite(redPin, HIGH);

}
else
{
  digitalWrite(redPin, LOW);
}

}
