
// Fire Alarm System

int flameSensor = 2;
int led = 9;
int buzzer = 8;

void setup() {

  pinMode(flameSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int flameValue = digitalRead(flameSensor);

  // Flame detected
  if (flameValue == 0) {

    digitalWrite(led, HIGH);

    // Higher tone
    tone(buzzer, 3000);

  }

  // No flame
  else {

    digitalWrite(led, LOW);
    noTone(buzzer);

  }

  delay(200);
}

