#define BAUDRATE 9600
#define LED_PIN 8
String readData;

void setup() {
	Serial.begin(BAUDRATE);
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);
}

void loop() {
	if(Serial.available()>0){
		readData = Serial.readStringUntil('\n');
		if(readData =="on"){
			Serial.println("Turn on diode");
			digitalWrite(LED_PIN, HIGH);
		}
		else if(readData == "off"){
			Serial.println("Turn off diode");
			digitalWrite(LED_PIN, LOW);
		} 
	}
}
