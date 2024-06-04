# ArduinoUNO RC Fight Robot

This project is an Arduino-based remote-controlled (RC) fight robot. The robot is controlled using an RC transmitter and receiver, with input channels determining the movement and weapon actions. The robot can move forward, backward, left, and right, and can also control a weapon.

## Features

- **Movement Control**: The robot can move in all directions (forward, backward, left, right).
- **Weapon Control**: The robot has a weapon system that can be activated or deactivated.
- **Remote Control**: The robot is controlled using an RC transmitter and receiver.

## Components

- **Arduino UNO**: The main microcontroller used to control the robot.
- **Motors**: DC motors for movement.
- **Weapon System**: Controlled via a motor or actuator.
- **RC Transmitter and Receiver**: For remote control input.

## Code Structure

### Main_Code.ino

This file handles the reading of input from the RC controller and determines the actions of the robot.

- **Input Connections**: Defines the pins connected to the RC receiver.
- **Global Variables**: Stores the values read from the RC channels.
- **Functions**:
  - `readChannel()`: Reads the pulse width from a specified channel.
  - `readSwitch()`: Reads the switch state from a specified channel.
  - `processInput()`: Processes the input values and determines actions.
- **Setup**: Initializes the serial communication and pin modes.
- **Loop**: Continuously reads the channel values, prints them to the serial monitor, and controls the robot based on the inputs.

### Motor.h

Header file for motor control functions.

- **Motor and Weapon Pins**: Defines the pins for the motors and weapon.
- **Function Prototypes**: Declarations for motor control functions.

### Motor.cpp

Implementation file for motor control functions.

- **Motor Initialization**: Sets the pin modes and initializes them to LOW.
- **Motor Control Functions**:
  - `Forward()`, `Backward()`, `Left()`, `Right()`: Controls the movement.
  - `Stop()`: Stops the movement.
  - `MoveWeapon()`, `StopWeapon()`: Controls the weapon state.

## Getting Started

### Prerequisites

- Arduino IDE
- Arduino UNO
- RC Transmitter and Receiver
- DC Motors
- Motor Driver Module
- Power Supply

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/ArduinoUNO_RC_Fight_Robot.git
    ```

2. Open the project in Arduino IDE:
    - Open `Main_Code.ino` in the Arduino IDE.

3. Upload the code to your Arduino UNO.

### Usage

1. Connect the RC receiver to the defined input pins on the Arduino UNO.
2. Power the Arduino and the motors.
3. Use the RC transmitter to control the robot.

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests for any improvements.


