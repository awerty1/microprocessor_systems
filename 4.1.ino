/*
Задание 1. Если нажать на кнопку «ЦЕНТР», то происходит постепенное 
зажигание светодиода (яркость меняется от 0 до 255).
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(IN2, INPUT);
}

int light = 0;

void loop() {
	if(light > 255){} 
	else 
	{
		light++; 
		delay(100);
	}
	
	if(buttonRead(BTN_CENTER))
	{
		ledPWM (OUT1, light);
	}
}