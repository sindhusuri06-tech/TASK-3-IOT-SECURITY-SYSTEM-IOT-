int pirSensor = 7;
int buzzer = 8;

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirSensor);

  if (motion == HIGH) {
    digitalWrite(buzzer, HIGH);
    Serial.println("Motion Detected! Alert Sent.");
    delay(1000);
  } else {
    digitalWrite(buzzer, LOW);
  }
}
