# 7-Segment Display Counter (Common Cathode)

## 1. Project Description
This project demonstrates how to interface a **Common Cathode 7-Segment Display** with an Arduino Uno. The system functions as a decimal counter that displays numbers from **0 to 9** sequentially, with a 1-second interval between each digit, and loops indefinitely.

---

## 2. Basic Knowledge
A 7-segment display consists of 8 LEDs packed into one unit. 7 LEDs form the digit segments ($a$ through $g$), and 1 LED is for the decimal point ($DP$).


### Classification: Common Cathode (CC)
As shown in the circuit diagram, this project uses the **Common Cathode** configuration:
* **Internal Wiring:** All the negative terminals (cathodes) are tied to a single common pin.
* **Common Pin Connection:** Connected to the **Ground (GND)** of the Arduino.
* **Control Logic:** To light up a segment, the Arduino pin must be set to **HIGH** (5V).
  * **HIGH (1)** = Segment ON
  * **LOW (0)** = Segment OFF

---

## 3. Circuit Wiring Table
Based on the provided breadboard layout, the connections are as follows:

| Segment | Arduino Pin | Logic (To Turn ON) |
| :--- | :--- | :--- |
| **a** | Pin 7 | HIGH |
| **b** | Pin 6 | HIGH |
| **c** | Pin 5 | HIGH |
| **d** | Pin 4 | HIGH |
| **e** | Pin 3 | HIGH |
| **f** | Pin 2 | HIGH |
| **g** | Pin 8 | HIGH |
| **Common** | **GND** | via 220Ω Resistor |

---


