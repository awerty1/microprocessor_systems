/*
Задание 2. Зажечь RGB-светодиод фиолетовым цветом на две секунды, 
затем оранжевым на 1 секунду
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	pinMode(OUT1, OUTPUT);
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(IN2, INPUT);
}

	int i = 0;
	
void loop() {

	while(i < 30000)
	{
		builtInRGB (BLUE);
		builtInRGB (RED);
		i++;
	} 
	delay(2000);
	
	i = 0;
	while(i < 30000)
	{
		builtInRGB (RED);
		builtInRGB (GREEN);
		i++;
	}
	delay(1000);
}