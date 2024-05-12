/*
Задание 3. Сделать измеритель уровня громкости: тихо – загорается один 
светодиод, чуть громче – два светодиода, громко – три светодиода.
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(OUT1, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT7, OUTPUT);
  pinMode(IN1, INPUT);
}

void loop() {
  ledPWM (OUT1, cdsAnalog(IN3));

  if (micAnalog(IN1) < 50)
  {
    led(OUT1, HIGH);
    led(OUT3, LOW);
    led(OUT7, LOW);
  }

  if (micAnalog(IN1) > 100)
  {
    led(OUT1, HIGH);
    led(OUT3, HIGH);
    led(OUT7, LOW);
  }
  if (micAnalog(IN1) > 150)
  {
    led(OUT1, HIGH);
    led(OUT3, HIGH);
    led(OUT7, HIGH);
  }
}