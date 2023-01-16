int sensorPin = A0;
int sensorValue =0;
int led = 13;
void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  sensorValue = analogRead(sensorPin);
  delay(1000);
  Serial.print("sensor=");
  Serial.println(sensorValue);
  if(sensorValue<500)
  digitalWrite(led, HIGH);
  else
  digitalWrite(led, LOW);
  delay(1000);
}