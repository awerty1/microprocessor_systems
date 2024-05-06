/*
Задание 2. Мигание светодиода.
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(OUT1, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	led(OUT1, HIGH);
	delay(1000);
	led(OUT1, LOW);
	delay(1000);
}