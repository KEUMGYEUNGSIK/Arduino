const int buttonPin = 22;

void setup() {
  pinMode(buttonPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(buttonPin, HIGH);
  Serial.println("HIGH");
  delay(3000);
  digitalWrite(buttonPin, LOW);
  Serial.println("LOW");
  delay(3000);

}
