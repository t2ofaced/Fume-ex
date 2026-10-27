#include Adafruit_NeoPixel.h
 
#define BTN_UP 12
#define BTN_DOWN 5
#define FAN_PWM 4
#define LED_DATA 13
#define NUM_LEDS 4
 
Adafruit_NeoPixel strip(NUM_LEDS, LED_DATA, NEO_GRB + NEO_KHZ800);
 
int speeds[4] = {300, 500, 750, 1023};
int speed = 0;
int lastSpeed = 0;
 
void setColor(int r, int g, int b) {
  for (int i = 0; i  NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(r, g, b));
  }
  strip.show();
}
 
void updateFan() {
  analogWrite(FAN_PWM, 1023 - speeds[speed]);
 
  if (speed == 0) setColor(0, 255, 0);
  if (speed == 1) setColor(255, 255, 0);
  if (speed == 2) setColor(255, 128, 0);
  if (speed == 3) setColor(255, 0, 0);
 
  analogWrite(FAN_PWM, 1023 - speeds[speed]);
  Serial.print(speed = );
  Serial.println(speed);
}
 
void setup() {
  Serial.begin(115200);
 
  pinMode(BTN_UP, INPUT_PULLUP);
  pinMode(BTN_DOWN, INPUT_PULLUP);
  pinMode(FAN_PWM, OUTPUT);
 
  analogWriteFreq(25000);
  analogWriteRange(1023);
 
  strip.begin();
  strip.setBrightness(80);
  strip.show();
 
  updateFan();
}
 
void loop() {
  if (digitalRead(BTN_UP) == LOW) {
    if (speed  3) {
      speed++;
      updateFan();
    }
    delay(250);
  }
 
  if (digitalRead(BTN_DOWN) == LOW) {
    if (speed  0) {
      speed--;
      updateFan();
    }
    delay(250);
  }
}
 