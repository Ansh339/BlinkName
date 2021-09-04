void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  ANSH = .- -. ... ....
  . = 1 SECOND (HIGH)
  - = 3 SECONDS (HIGH)
  TIME BETWEEN DASH AND DOT = 1 SECOND (LOW)
  TIME BETWEEN LETTERS = 3 SECONDS (LOW)
  */
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(3000);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);
//A
digitalWrite(LED_BUILTIN, HIGH);
delay(3000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);
//N
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);
//S
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);
//H
}
