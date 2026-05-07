# Task 1.1P Lights ON System

## Description

This project is a simple smart lighting system for an elderly care home. The system is designed for Linda, who comes home in the dark during winter. When she presses the switch, the porch light and hallway light turn on so she can safely enter the house.

The porch light stays on for 30 seconds. The hallway light stays on for 60 seconds.

## Hardware Used

- Arduino Nano 33 IoT
- Breadboard
- Two LEDs
- Two resistors
- Slide switch or push button
- Jumper wires

## How the System Works

The porch LED is connected to digital pin D12. The hallway LED is connected to digital pin D10. The switch is connected to digital pin D2 and uses the internal pullup resistor.

When the switch is pressed, both LEDs turn on. After 30 seconds, the porch LED turns off. After another 30 seconds, the hallway LED turns off. This means the hallway LED stays on for 60 seconds in total.

## Code Structure

The code uses modular programming by dividing the program into smaller functions.

The setupPins function sets up the LED pins and switch pin.

The isSwitchPressed function checks whether Linda has pressed the switch.

The runLightSequence function controls the full timing sequence for the porch and hallway lights.

The turnOnBothLights function turns both LEDs on.

The turnOffPorchLight function turns off the porch LED after 30 seconds.

The turnOffHallwayLight function turns off the hallway LED after 60 seconds.

The turnOffAllLights function makes sure both lights are off when the program starts.

Using separate functions makes the code easier to read, test, and change later.
