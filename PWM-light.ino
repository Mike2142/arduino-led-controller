constexpr int LED_PIN = 3;
constexpr int PAUSE = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_PIN, 1);
  delay(PAUSE);

  analogWrite(LED_PIN, 2);
  delay(PAUSE);

  analogWrite(LED_PIN, 4);
  delay(PAUSE);

  analogWrite(LED_PIN, 8);
  delay(PAUSE);

  analogWrite(LED_PIN, 16);
  delay(PAUSE);


  analogWrite(LED_PIN, 32);
  delay(PAUSE);

  analogWrite(LED_PIN, 64);
  delay(PAUSE);

  analogWrite(LED_PIN, 128);
  delay(PAUSE);

  analogWrite(LED_PIN, 192);
  delay(PAUSE);

  digitalWrite(LED_PIN, HIGH);
  delay(PAUSE);

  analogWrite(LED_PIN, 192);
  delay(PAUSE);

  analogWrite(LED_PIN, 128);
  delay(PAUSE);

  analogWrite(LED_PIN, 64);
  delay(PAUSE);

  analogWrite(LED_PIN, 32);
  delay(PAUSE);

  analogWrite(LED_PIN, 16);
  delay(PAUSE);

  analogWrite(LED_PIN, 8);
  delay(PAUSE);
  
  analogWrite(LED_PIN, 4);
  delay(PAUSE);

  analogWrite(LED_PIN, 2);
  delay(PAUSE);
  
  analogWrite(LED_PIN, 1);
  delay(PAUSE);

  digitalWrite(LED_PIN, LOW);
  delay(PAUSE);
}
