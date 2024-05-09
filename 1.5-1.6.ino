/*
Задание 5. Дистанционный переключатель с тремя светодиодами: нажав 
на определенную кнопку ПДУ (F1-F6), светодиоды либо загораются, либо 
гаснут.
F1 – включается первый светодиод, на F4 – гаснет.
F2 – включается второй светодиод, на F5 – гаснет.
F3 – включается третий светодиод, на F6 – гаснет.
Номера портов датчика и светодиода:

Вариант 1

*Порты подключения светодиодов 1, 3, 7

*Порт подключения датчика ПДУ 2

*Канал связи 6


Задание 6. При нажатии на кнопку «ВВЕРХ» увеличивается частота и 
динамик выдает звук с более высокой частотой (шаг изменения выбираете 
сами). При нажатии на кнопку «ВНИЗ» частота понижается
*/

void setup() {
	// put your setup code here, to run once:
	pinMode(OUT1, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT7, OUTPUT);
	pinMode(OUT2, OUTPUT);
	IRRC_setup(IN2, 6);
}

int fr = 0;

void loop() {
 
	if(RC(UP_KEY))
	{
		if(fr < 10000)
		{
			fr += 200;
		}
		tone(OUT2, fr);
		delay(1000);
	}

	if(RC(DOWN_KEY))
	{
		if(fr >= 0)
		{
			fr -= 200;
		}
		tone(OUT2, fr);
		delay(1000);
	}

	// put your main code here, to run repeatedly:
	if(RC(F1_KEY))
	{
		led(OUT1, HIGH);
	} 
	if(RC(F4_KEY))
	{
		led(OUT1, LOW);
	} 

	if(RC(F2_KEY))
	{
		led(OUT3, HIGH);
	} 
	if(RC(F5_KEY))
	{
		led(OUT3, LOW);
	} 

	if(RC(F3_KEY))
	{
		led(OUT7, HIGH);
	} 
	if(RC(F6_KEY))
	{
		led(OUT7, LOW);
	} 
}