constexpr int LED_PIN = 3;
constexpr int PAUSE = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(LED_PIN, brightness);
    delay(5);
  }

  for (int brightness = 255; brightness > 0; brightness--) {
    analogWrite(LED_PIN, brightness);
    delay(5);
  }

}
