# Task 1.1P – Lights ON System

## Overview
This project is a simple lighting system designed for an elderly care home scenario. The aim is to make it easier and safer for someone to enter their home at night.

When the slide switch is turned on, both the porch light and hallway light turn on. The porch light stays on for 30 seconds and then turns off, while the hallway light stays on for a total of 60 seconds before turning off.



## Components Used
- Arduino Nano 33 IoT  
- 2 LEDs (porch and hallway lights)  
- 2 resistors  
- 1 slide switch  
- Breadboard  
- Jumper wires  



## How the System Works
The slide switch is used as the input. When the switch is turned on, the Arduino detects it and activates both LEDs.

The program then uses time delays to control how long each light stays on:
- After 30 seconds, the porch light turns off  
- After another 30 seconds, the hallway light turns off  

The loop function keeps running continuously, so the system checks the switch again after completing one cycle.



## Code Explanation
The code starts by setting the LED pins as outputs and the switch pin as an input using an internal pull-up resistor.

Inside the loop, the program checks whether the switch is turned on. If it is, both LEDs are turned on using digitalWrite.

The delay() function is used to control the timing. First, the program waits 30 seconds before turning off the porch light. Then it waits another 30 seconds before turning off the hallway light.



## Modular Programming Approach
A modular programming approach was used by separating the setup and the main logic into different sections.

The setup function handles all the initial configurations, while the loop function is responsible for checking the switch and controlling the LEDs.

This makes the program easier to read and understand. It also makes it easier to change or extend the system in the future, such as adding more lights or changing the timing.

## Files Included
- Task1.1Lights_ON.ino (Arduino code)
- Circuit diagram image
- Video showing the working system



## Notes
This system uses a simple delay-based approach, which works well for this task. However, in a real-world system, a non-blocking method or sensors (like motion detection) could improve performance and usability.

Video link :- https://youtu.be/k0PIaNFsSx8
