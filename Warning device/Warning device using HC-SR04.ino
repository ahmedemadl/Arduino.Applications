int LedPin=13;
int TrigPin=7;
int EchoPin=8;

int value;
long Time;
void setup() {
  // put your setup code here, to run once:
pinMode(LedPin, OUTPUT);
pinMode(TrigPin, OUTPUT); //sending sound
pinMode(EchoPin, INPUT); //receiving sound

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(TrigPin,LOW); //Clears the TrigPin
delayMicroseconds(2); 


digitalWrite(TrigPin, HIGH); //Sends the sound
delayMicroseconds(10);
digitalWrite(TrigPin, LOW);

Time = pulseIn(EchoPin,HIGH); //Reads retruning sound

value = Time * 0.034 / 2; //Speed of sound is 343 m/s
 
if (value <=15) // 15 centimeters
{
  digitalWrite(LedPin, HIGH);
}
else
{
 digitalWrite(LedPin, LOW);
}

}
