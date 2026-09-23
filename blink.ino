// Définition de la broche utilisée pour la LED
const int ledPin = 13;

void setup() {
  // Configuration de la broche 13 en mode Sortie (OUTPUT)
  pinMode(ledPin,OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);// Allumer la LED (5V)
  delay(1000);               // Maintenir allumé pendant 1000 ms

  digitalWrite(ledPin, LOW);// Éteindre la LED (0V)
  delay(1000);              // Maintenir éteint pendant 1000 ms
}
