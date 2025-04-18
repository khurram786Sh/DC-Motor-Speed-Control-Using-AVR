# DC Motor Speed Control Using AVR

## Overview:
This project demonstrates how to control the speed of a DC motor using the Atmega328p microcontroller. By utilizing Pulse Width Modulation (PWM) and external interrupts, the motor speed is adjusted in real-time with push buttons. The system provides precise motor control, ideal for various applications.

## Features:
- **PWM-based speed control**: The microcontroller adjusts the motor speed by modifying the duty cycle of the PWM signal.
- **Real-time speed adjustment**: External interrupts allow the user to increase or decrease the motor speed using push buttons.
- **Motor driver (L293D)**: The L293D motor driver is used to control the direction and power supply of the motor.

## Components:
1. **Atmega328p Microcontroller**: The brain of the system, responsible for PWM generation and speed control.
2. **L293D Motor Driver**: Controls the DC motor's direction and power.
3. **Push Buttons**: Used for adjusting the motor speed.
4. **9V DC Motor**: The motor whose speed is controlled.
5. **Crystal Oscillator**: Provides a stable clock signal for the microcontroller.
6. **Capacitors and Resistors**: Stabilize the power supply and limit current where necessary.
7. **Breadboard and Wires**: For easy prototyping and circuit assembly.

## System Requirements:
- **Microcontroller**: Atmega328p
- **Programming Platform**: Arduino IDE or compatible C programming environment
- **Motor Driver**: L293D
- **Other Components**: Breadboard, push buttons, resistors, capacitors

## Circuit Design:
The system uses a simple circuit involving the Atmega328p microcontroller, L293D motor driver, push buttons for speed control, and a 9V DC motor. The microcontroller generates the PWM signal, which controls the motor speed via the L293D motor driver.

## Code Explanation:
The code is written in C, utilizing the Atmega328p's PWM and interrupt capabilities. The program configures PWM pins and external interrupts to increase or decrease the motor speed with each button press.

- **PWM Setup**: Configures the microcontroller to generate a PWM signal on the motor driver.
- **Interrupt Handling**: The push buttons trigger interrupts, increasing or decreasing the motor speed.
- **Main Loop**: Continuously adjusts the motor's speed by changing the PWM duty cycle based on button presses.

## How to Run:
1. **Circuit Assembly**: Connect the components as per the circuit diagram.
2. **Code Upload**: Upload the C code to the Atmega328p microcontroller using an appropriate programmer (e.g., USBasp).
3. **Testing**: Once the code is uploaded, the motor's speed can be adjusted using the push buttons. The motor's speed will change proportionally to the PWM duty cycle.

## Results and Observations:
The system successfully demonstrated real-time speed control of the DC motor. Speed adjustments were smooth, with changes in the duty cycle corresponding to changes in motor speed. The motor responded promptly to button presses, showing reliable and stable performance.

## Future Improvements:
- **Speed Feedback**: Integrate speed sensors for closed-loop control.
- **Motor Direction Control**: Implement a feature to control the direction of the motor.
- **User Interface**: Add a display or interface to monitor and control motor speed.
- **PID Control**: Implement PID control for better precision and stability.

## Conclusion:
This project highlights the practical application of microcontroller-based speed control for DC motors. The successful implementation of PWM and external interrupts provides a solid foundation for further exploration and development of motor control systems.

## License:
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

