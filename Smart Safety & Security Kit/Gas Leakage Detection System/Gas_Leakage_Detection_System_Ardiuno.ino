int gasSensor = 2;   // MQ D0 connected to D2

int led = 4;
int buzzer = 6;

void setup() {

  pinMode(gasSensor, INPUT);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

  // Initially OFF
  digitalWrite(led, LOW);
  noTone(buzzer);
}

void loop() {

  int gasValue = digitalRead(gasSensor);

  Serial.print("Gas Sensor: ");
  Serial.println(gasValue);

  // Smoke/Gas Detected
  if(gasValue == LOW) {

    digitalWrite(led, HIGH);

    // Loud buzzer
    tone(buzzer, 1000);
  }

  // No Smoke
  else {

    digitalWrite(led, LOW);

    noTone(buzzer);
  }

  delay(100);
}