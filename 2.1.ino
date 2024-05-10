/*
Задание 1. Пока в аудитории темно, случайным образом горит один из 
трех светодиодов. Если становится светло, этот светодиод выключается.
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(OUT1, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT7, OUTPUT);
	pinMode(OUT2, OUTPUT);
	IRRC_setup(IN2, 6);
	pinMode(IN1, INPUT);
}

int rnd = random(1, 4);
int port = 0;

void loop() {
	
	if(cdsLight(IN3, 500))
	{
		if(rnd == 1)
		{
		  led(OUT1, HIGH);
		}
		
		if(rnd == 2)
		{
		  led(OUT3, HIGH);
		}
		
		if(rnd == 3)
		{
		  led(OUT7, HIGH);
		}
	} 
	else 
	{
		led(OUT1, LOW);
		led(OUT3, LOW);
		led(OUT7, LOW);
		rnd = random(1, 4);
	}
  
}