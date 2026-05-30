int pirPin = 2;
int buzzer = 8;
int led = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int motion = digitalRead(pirPin);

  if (motion == HIGH) {

    tone(buzzer, 3000);   // Loud sound
    digitalWrite(led, HIGH);

    Serial.println("Motion Detected!");

  } else {

    noTone(buzzer);
    digitalWrite(led, LOW);

    Serial.println("No Motion");
  }

  delay(200);
}