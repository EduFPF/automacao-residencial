// aut.ino

int rele = 13;

void setup() {

	pinMode(rele, OUTPUT);

}

void loop() {

	digitalWrite(rele, HIGH);
	delay(2500);
	digitalWrite(rele, OUTPUT);
	delay(2500);

}

