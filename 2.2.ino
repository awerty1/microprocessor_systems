/*
Задание 2. Чем светлее в аудитории, тем ярче горит светодиод.
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(OUT1, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT7, OUTPUT);
	pinMode(OUT2, OUTPUT);
	IRRC_setup(IN2, 6);
	pinMode(IN1, INPUT);
	pinMode(IN3, INPUT);
}

int rnd = random(1, 4);
int port = 0;

void loop() {
	ledPWM (OUT1, cdsAnalog(IN3));
}