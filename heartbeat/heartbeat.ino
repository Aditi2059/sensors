int const PULSE_SENSOR_PIN = 0;   

int Signal;                
int Threshold = 550;      
void setup() {
	pinMode(LED_BUILTIN,OUTPUT);  
	Serial.begin(9600);           

void loop()
 {

	Signal = analogRead(PULSE_SENSOR_PIN); 

	Serial.println(Signal);                

	if(Signal > 15){                
		digitalWrite(LED_BUILTIN,HIGH)
	} else {
		digitalWrite(LED_BUILTIN,LOW);     
	}
	delay(1000);
}