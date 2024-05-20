/*
Задание 3. Считать цвет с карточки и отобразить его «словом» в монитор 
порта.
*/

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);


	setupColorSensor (OUT1, OUT2, OUT3, IN1);
}
	int i = 0;

void loop() {

	if (getColor() == 0){
		Serial.print(" black ");
	}
	
	if (getColor() == 1){
		Serial.print(" white ");
	}
	
	if (getColor() == 2){
		Serial.print(" red ");
	}
	
	if (getColor() == 3){
		Serial.print(" green ");
	}
	
	if (getColor() == 4){
		Serial.print(" blue ");
	}
	
	if (getColor() == 9){
		Serial.print(" ERROR ");
	} 
}