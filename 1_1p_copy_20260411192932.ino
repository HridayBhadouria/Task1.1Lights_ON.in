// Task 1.1P
// Switching ON Lights: Modular Programming Approach

const int porchLED = 12;
const int hallwayLED = 10;
const int switchPin = 2;

void setup() {
  setupPins();
}

void loop() {
  if (isSwitchPressed()) {
    runLightSequence();
  }
}

// This function sets up all the input and output pins
void setupPins() {
  pinMode(porchLED, OUTPUT);
  pinMode(hallwayLED, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);

  turnOffAllLights();
}

// This function checks if the switch has been pressed
bool isSwitchPressed() {
  return digitalRead(switchPin) == LOW;
}

// This function runs the full light timing sequence
void runLightSequence() {
  turnOnBothLights();

  delay(30000);

  turnOffPorchLight();

  delay(30000);

  turnOffHallwayLight();

  delay(500);
}

// This function turns both lights on
void turnOnBothLights() {
  digitalWrite(porchLED, HIGH);
  digitalWrite(hallwayLED, HIGH);
}

// This function turns the porch light off
void turnOffPorchLight() {
  digitalWrite(porchLED, LOW);
}

// This function turns the hallway light off
void turnOffHallwayLight() {
  digitalWrite(hallwayLED, LOW);
}

// This function makes sure both lights are off
void turnOffAllLights() {
  digitalWrite(porchLED, LOW);
  digitalWrite(hallwayLED, LOW);
}
