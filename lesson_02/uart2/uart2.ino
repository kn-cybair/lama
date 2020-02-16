#define BAUDRATE 9600

void setup() {
	Serial.begin(BAUDRATE);
	Serial.println("Numbers:"); 
	for(int i = 0; i < 20; i++){
		Serial.print(i);
		Serial.print(" ");
	}
	Serial.println();
	Serial.println("Alphabet:"); 
	for(int i = 65; i < 91; i++){
		Serial.write(i);
		Serial.print(" ");
	}
	Serial.println();
	Serial.println();
	Serial.println("Different number systems:");
	Serial.println("BIN: OCT: DEC: HEX:");
	for(int i = 0; i < 16; i++){
		Serial.print(i, BIN);
		Serial.print(" ");
		Serial.print(i, OCT);
		Serial.print(" ");
		Serial.print(i, DEC);
		Serial.print(" ");
		Serial.print(i, HEX);
		Serial.print("\n");
	}
}

void loop() {
}
