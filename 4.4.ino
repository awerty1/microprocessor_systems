/*
Задание 4. Считать с карточки цвет и продублировать его на встроенный 
в контроллер RGB-светодиод.
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);


	setupColorSensor (OUT1, OUT2, OUT3, IN1);
}

	int i = 0;

void loop() {

	if (getColor() == 0) 
	{
		Serial.print(" black ");
	}
	
	if (getColor() == 1)
	{
		Serial.print(" white ");
		builtInRGB (RED);
		builtInRGB (GREEN);
		builtInRGB (BLUE);
	}
	
	if (getColor() == 2)
	{
		Serial.print(" red ");
		builtInRGB (RED);
	} 
	
	if (getColor() == 3)
	{
		Serial.print(" green ");
		builtInRGB (GREEN);
	}
	
	if (getColor() == 4)
	{
		Serial.print(" blue ");
		builtInRGB (BLUE);
	}
	
	if (getColor() == 9)
	{
		Serial.print(" ERROR ");
	}
}