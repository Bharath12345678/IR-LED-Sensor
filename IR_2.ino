#define SENSOR_PIN 9
#define LED_Pin 8
int led = 8;//  initialize LED pin

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); // start serial communication
}

void loop() {
  if (digitalRead(SENSOR_PIN) == LOW) {
    Serial.println("Object detected");
    digitalWrite(led, HIGH);
    //Serial.println("LED is ON");
    delay(500);
  } else {
    Serial.println("No object");
    digitalWrite(led, LOW);
    //Serial.println("LED is OFF");
    delay(500);
  }
  delay(500);
}

