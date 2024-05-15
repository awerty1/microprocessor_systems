/*
Задание 1. Вывести на экран значения датчика освещенности в два 
столбика:
Time Value
1 с. …
2 с. …
3 с. …
… …
*/

void setup() {
	pinMode(IN1, INPUT);

	Serial.begin(9600);
}

int i=1;

void loop() {
	// put your main code here, to run repeatedly:
	analogWrite(IN1, LOW);
	int light = analogRead(IN1);

	Serial.print(i);
	Serial.print("c  ");
	Serial.println(light);
	i++;
	delay(1000);
}
