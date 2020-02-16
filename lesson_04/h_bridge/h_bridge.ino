#define ENABLE_PIN 6
#define YELLOW_LED 7
#define RED_LED 8

void setup() { 
	pinMode(ENABLE_PIN, OUTPUT); 
	digitalWrite(ENABLE_PIN, HIGH);
	pinMode(YELLOW_LED, OUTPUT); 
	pinMode(RED_LED, OUTPUT);
} 

void loop() { 
	digitalWrite(YELLOW_LED, HIGH);
	digitalWrite(RED_LED, LOW);

	delay(2000);
	digitalWrite(YELLOW_LED, LOW);
	digitalWrite(RED_LED, HIGH);

	delay(2000);
}
