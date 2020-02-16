#define BAUDRATE 9600
#define SENSOR A1

int sens_value;
int ledPins[] = { 8, 9, 10 };
int ledCount = 3;

void setup(){
	Serial.begin(BAUDRATE);
	for (int thisLed = 0; thisLed < ledCount; thisLed++) {
		pinMode(ledPins[thisLed], OUTPUT);
		digitalWrite(ledPins[thisLed], LOW);
	}
	pinMode(SENSOR, INPUT);
}

void loop(){
	sens_value = analogRead(SENSOR); 
	int ledLevel = map(sens_value, 0, 1023, 0, ledCount);

	for (int thisLed = 0; thisLed < ledCount; thisLed++) {
		if (thisLed < ledLevel) {
			digitalWrite(ledPins[thisLed], HIGH);
		}
		else {
			digitalWrite(ledPins[thisLed], LOW);
		}
	}
	delay(1000);
}
