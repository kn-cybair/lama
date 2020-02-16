#define BAUDRATE 9600
//int counter = 0;
//short counter = 0;
//double counter = 0;
char counter = 0;

void setup() {
	Serial.begin(BAUDRATE);
}

void loop() {
	Serial.print(counter);
	Serial.print(" ");
	counter++;
	delay(50);
}
