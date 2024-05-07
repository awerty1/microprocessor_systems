/*
Задание 3. Поочередное мигание светодиодов. Светится один –
выключается другой, и так поочередно все три светодиода по кругу. Время 
задержки – 1 с.
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	led(OUT1, HIGH);
	delay(1000);
	led(OUT1, LOW);
	delay(1000);

	led(OUT2, HIGH);
	delay(1000);
	led(OUT2, LOW);
	delay(1000);

	led(OUT3, HIGH);
	delay(1000);
	led(OUT3, LOW);
	delay(1000);
}