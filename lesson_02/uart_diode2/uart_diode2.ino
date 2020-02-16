#define BAUDRATE 9600
#define LED_PIN 8

String readData;

String userCommand;
String commandValue;

int ledState = LOW;

long previousMillis = 0; 

bool if_flicker = false; 

long interval = 1000;

void setup() {
	Serial.begin(BAUDRATE);
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);
}


void loop() {
	unsigned long currentMillis = millis();
	if(currentMillis - previousMillis > interval && if_flicker) {
		previousMillis = currentMillis; 
		if (ledState == LOW){
			ledState = HIGH;
		}
		else{
			ledState = LOW;
		} 
		digitalWrite(LED_PIN, ledState);
	}

	if(Serial.available()>0){
		readData = Serial.readStringUntil('\n');
		char sz[] = "Command Value";
		char buf[sizeof(sz)];
		readData.toCharArray(buf, sizeof(buf));
		char *p = buf;
		char *str;
		for(int i = 0; i<2;i++){
			str = strtok_r(p, " ", &p);
			if(i==0){
				userCommand= str;
			}
			if(i==1){
				commandValue = str;
			}
		}
		if(userCommand == "flicker"){
			Serial.print("Flickering diode with ms interval: ");
			Serial.println(commandValue);
			interval = commandValue.toInt();
			if_flicker = true;
		}
	}
}
