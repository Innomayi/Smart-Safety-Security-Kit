int soundPin = 2;
int ledPin = 8;

bool ledState = false;

void setup() {

  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
}

void loop() {

  int sound = digitalRead(soundPin);

  if (sound == LOW) {

    ledState = !ledState;

    digitalWrite(ledPin, ledState);

    delay(300);
  }
}