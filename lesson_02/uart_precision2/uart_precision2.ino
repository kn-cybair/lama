#define BAUDRATE 9600
int digits_after_decimal = 10;

void setup() {
	Serial.begin(BAUDRATE);

	Serial.print("PI: ");
	Serial.println(PI);

	Serial.print("PI (extended): ");
	Serial.println(PI, digits_after_decimal);
}

void loop() {
}
