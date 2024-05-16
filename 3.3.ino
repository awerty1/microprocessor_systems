/*
Задание 3. В зависимости от введенного слова зажечь первый, второй или 
третий светодиод.
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

	if (light == 1) digitalWrite(OUT1, HIGH);
	if (light == 2) digitalWrite(OUT2, HIGH);
	if (light == 3) digitalWrite(OUT3, HIGH);
	delay(1000);
}

