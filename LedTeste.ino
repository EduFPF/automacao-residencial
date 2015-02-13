int led = 13, dly = 1000;

void setup () {
	pinMode(led, OUTPUT);
}

void loop () {
	digitalWrite(led, HIGH);
	delay(dly);
	digitalWrite(led, LOW);
	delay(dly);
}