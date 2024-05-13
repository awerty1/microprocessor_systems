/*
Задание 4. На каждый хлопок поочередно загораются три светодиода: 
первый хлопок – загорается первый светодиод, второй – загорается второй 
светодиод, гаснет первый и т.д. Количество хлопков не ограничивается тремя. 
Например, на восьмой хлопок загорается второй светодиод и гаснет первый
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(IN1, INPUT);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT7, OUTPUT);
	pinMode(OUT3, OUTPUT);
	Serial.begin(9600);
}

int a = 0;

void loop() {
	Serial.println(micAnalog(IN1));
	// put your main code here, to run repeatedly:
	if (micAnalog(IN1) >= 350)
	{

		if (a == 1)
		{
			led(OUT1, HIGH);
		}
		else led(OUT1, LOW);

		if (a == 2)
		{
			led(OUT3, HIGH);
		}
		else led(OUT3, LOW);

		if (a == 3)
		{
			led(OUT7, HIGH);
		}
		else led(OUT7, LOW);

		if (a >= 3)
		{
			a = 0;
		}
		a++;
	}
}