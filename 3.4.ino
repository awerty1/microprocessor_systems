/*
Задание 4. Построить график показаний датчика звука (измерения 
проводить каждые 100 мс).
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(IN2, INPUT);
}

int light;

void loop() {
	Serial.println(micAnalog(IN2)) ;
	delay(100);
}
