# Endoscopic Image Enhancement System

A prototype system designed to simulate the core functionality of a medical endoscope.  
The project integrates mechanical articulation, adjustable illumination, and real-time image capture using Arduino-based hardware.

## Objective
To design and implement a simplified endoscopic system that allows directional control, adjustable lighting, and camera-based image capture.

## System Components

### 1. Mechanical Control
- Two servo motors simulate X and Y articulation.
- Controlled via joystick input.
- Arduino Uno processes the joystick signals and maps them to servo angles.

### 2. Illumination System
- White LEDs for adjustable brightness.
- RGB LED for simulated color temperature variation.
- Potentiometers used for brightness and color control.

### 3. Image Capture
- OV7670 camera module used for frame acquisition.
- Implemented using a dedicated Arduino due to memory and timing requirements.

## Hardware Used
- Arduino Uno
- OV7670 Camera Module
- Servo Motors (x2)
- Joystick Module
- White LEDs
- RGB LED
- Potentiometers
- Breadboard and jumper wires

## Features
- Real-time joystick-controlled articulation
- Adjustable LED brightness
- RGB color temperature simulation
- Camera-based image capture

## Future Improvements
- Wireless image transmission
- Mobile or PC visualization interface
- Higher resolution camera modules
- 
## Full Report
The full project report can be found here:
[Project Report](report/Monitors Task 3.pdf)

## Authors
Biomedical Engineering Students  
Cairo University – Faculty of Engineering
