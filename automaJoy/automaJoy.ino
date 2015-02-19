/*
	Eduardo Figueiredo Porto Filho
	Igu
	Universidade Federal de Campina Grande
	Automação Residencial
*/

int rele = 10;
char s;

void setup() {

	Serial.begin(9600);
	pinMode(rele, OUTPUT);

}

void loop() {

	if (Serial.available()) {
		s = Serial.read();
		Serial.println(s);
	}


	if (s == '1'){
		digitalWrite(rele, LOW);
	}

	else if (s == '0'){
		digitalWrite(rele, HIGH);
	}

}

