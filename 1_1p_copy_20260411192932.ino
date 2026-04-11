const int porchLED = 12;     // LED for porch light
const int hallwayLED = 10;   // LED for hallway light
const int switchPin = 2;     // slide switch

void setup() {
  pinMode(porchLED, OUTPUT);      // set porch LED as output
  pinMode(hallwayLED, OUTPUT);    // set hallway LED as output
  pinMode(switchPin, INPUT_PULLUP); // use built-in resistor for switch
}

void loop() {

  if (digitalRead(switchPin) == LOW) { // switch is ON

    digitalWrite(porchLED, HIGH);   // turn porch light ON
    digitalWrite(hallwayLED, HIGH); // turn hallway light ON

    delay(30000); // wait 30 seconds

    digitalWrite(porchLED, LOW); // turn porch light OFF

    delay(30000); // wait another 30 seconds

    digitalWrite(hallwayLED, LOW); // turn hallway light OFF

    delay(500); // small pause before checking again
  }
}