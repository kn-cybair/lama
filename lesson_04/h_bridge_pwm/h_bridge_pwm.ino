#define ENABLE_PIN 6
#define LEFT_ROTATE 7
#define RIGHT_ROTATE 8

void setup() { 
	pinMode(ENABLE_PIN, OUTPUT); 
	pinMode(LEFT_ROTATE, OUTPUT); 
	pinMode(RIGHT_ROTATE, OUTPUT);
	digitalWrite(LEFT_ROTATE, LOW);
	digitalWrite(RIGHT_ROTATE, HIGH);
} 
void loop() { 
	for (int i = 0; i <= 255; i++) {
		analogWrite(ENABLE_PIN, i); 
		delay(25);
	}
	delay(2000);
	digitalWrite(LEFT_ROTATE, HIGH);
	digitalWrite(RIGHT_ROTATE, LOW);
	for (int i = 0; i <= 255; i++) {
		analogWrite(ENABLE_PIN, i);
		delay(25);
	}
	delay(2000); 
	digitalWrite(LEFT_ROTATE, LOW);
	digitalWrite(RIGHT_ROTATE, HIGH);
}
