# Automatic Pothole Detector

An Arduino-based road-surface detection prototype that uses an HC-SR05 ultrasonic sensor to measure distance and LED indicators to signal normal surfaces and road irregularities such as potholes and speed breakers. The project explores a simple way to alert a user to changes in the road surface.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Working Principle](#working-principle)
- [LED Indicators](#led-indicators)
- [Usage](#usage)
- [Results](#results)
- [Limitations](#limitations)
- [Project Documentation](#project-documentation)
- [Contact](#contact)

## Introduction
Road surfaces can develop potholes and other irregularities due to factors such as traffic, weather, pavement age, construction quality, and drainage. This project uses an Arduino UNO and an ultrasonic sensor to detect changes in the distance to the road surface, then signals the detected condition using LEDs. It is a working prototype, not a deployed vehicle system.

## Features
- Working Arduino-based prototype.
- Detects relative road-surface changes that may indicate a pothole, depression, or raised obstacle such as a speed breaker.
- Signals road conditions using green, yellow, and red LEDs.

## Technologies Used
- Arduino UNO
- HC-SR05 Ultrasonic Sensor
- Red, Yellow and Green LEDs
- Arduino IDE

## Working Principle
1. The HC-SR05 ultrasonic sensor continuously measures the distance to the surface below it.
2. The measured distance is compared with a predefined reference distance for a level road.
3. A greater distance than the reference may indicate a pothole or depression; a smaller distance may indicate a raised obstacle such as a speed breaker.
4. The system activates an LED indicator according to the detected condition.

### LED Indicators

| LED | Indication |
| --- | --- |
| Green | Normal road surface |
| Yellow | Small pothole or speed breaker |
| Red | Deep pothole |

## Usage
The prototype is intended for demonstration in conditions and settings such as:
- Monsoon conditions
- Muddy roads and construction areas
- Night driving

## Results

### Green LED – Normal Road Surface
![Green LED indicating a normal road surface](https://github.com/user-attachments/assets/ef64aa4b-625a-46d9-b05b-f540b94d9b16)

### Red LED – Deep Pothole
![Red LED indicating a deep pothole](https://github.com/user-attachments/assets/722b280f-192b-43f3-95a5-488ed5e7fe94)

### Yellow LED – Minor Road Irregularity
![Yellow LED indicating a minor road irregularity](https://github.com/user-attachments/assets/6666e50a-6c3e-4a0f-ab0b-e70400018afb)
![Second view of the yellow LED indicator](https://github.com/user-attachments/assets/95934b18-f793-4df7-97e0-f2b1fc9ff5b4)

### Working Prototype
![Automatic pothole detector working prototype](https://github.com/user-attachments/assets/58b0b30c-b737-4688-b27b-9a2ca315d91f)

## Limitations
- The ultrasonic sensor has a limited measurement range.
- Sensor readings can be affected by environmental conditions, including dust and water.
- The system has power-consumption requirements that may limit its use without a suitable power source.

## Project Documentation
- [Official Report](<Official Report.pdf>)
- [Zonal Report](<Zonal Report.docx>)

## Contact
[@Sanskruti Joshi](https://github.com/Woman-in-STEM)
