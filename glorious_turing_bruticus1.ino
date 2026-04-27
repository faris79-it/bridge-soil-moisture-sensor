int redLED = 2;
int greenLED = 3;
int buzzer = 6;

int soilPin = A0;
  int ldrPin = A2;
int potPin = A1;

int soilValue = 0;
int lightValue = 0;
int potValue = 0;

int lightThreshold = 600;   // LDR sensitivity

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Read sensors
  soilValue = analogRead(soilPin);
  lightValue = analogRead(ldrPin);
  potValue = analogRead(potPin);

  // Potentiometer controls soil threshold
  int soilThreshold = map(potValue, 0, 1023, 300, 700);

  Serial.print("Soil: ");
  Serial.print(soilValue);
  Serial.print(" | Light: ");
  Serial.print(lightValue);
  Serial.print(" | Pot: ");
  Serial.println(potValue);

  // 🌱 WET SOIL → SAFE
  if (soilValue > soilThreshold) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  }

  // 🌵 DRY SOIL + BRIGHT LIGHT → ALERT
  else if (soilValue <= soilThreshold && lightValue > lightThreshold) {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);
  }

  // 🌑 DRY SOIL + LOW LIGHT → WARNING (no buzzer)
  else {
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}