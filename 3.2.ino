/*
Задание 2. Задать с клавиатуры яркость светодиоду.
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
}

int light;

void loop() {
	// Получаем команды на включение-выключение светодиода на 13 порту. 
	light = Serial.parseInt();

	//delay(1000);
	digitalWrite(OUT1, light);
}