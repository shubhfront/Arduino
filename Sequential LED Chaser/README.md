# Project: Sequential LED Chaser (Tri-Color Cycle)

## 📝 Description
The **Sequential LED Chaser** is a foundational project designed to introduce the concepts of digital output sequencing, timing control, and basic circuit loop logic. The system cycles through three LEDs (Red, Green, and Blue) in a continuous "chasing" pattern with a precise $200ms$ interval.

---

## 🖼️ Circuit Layout
The circuit uses a common ground bus and individual digital signal lines to control each LED independently.



### Pin Mapping
| Component | Arduino Pin | Logic State | Function |
| :--- | :--- | :--- | :--- |
| **Red LED** | D12 | Digital | Primary Stage |
| **Green LED** | D8 | Digital | Secondary Stage |
| **Blue LED** | D5 | Digital | Tertiary Stage |
| **Resistors** | - | $220\Omega$ | Current Limiting |

---

## ⚙️ How it Works

### 1. Hardware Interaction
The Arduino acts as the controller. When a digital pin is set to `HIGH`, it provides $5V$ to the anode of the LED. The $220\Omega$ resistor is placed in series to limit the current flow, protecting both the LED and the Arduino's internal circuitry from overcurrent.

### 2. Software Logic
The firmware utilizes the `digitalWrite()` and `delay()` functions within a loop:
1.  **Red Phase:** Pin 12 goes `HIGH` for $200ms$, then `LOW`.
2.  **Green Phase:** Pin 8 goes `HIGH` for $200ms$, then `LOW`.
3.  **Blue Phase:** Pin 5 goes `HIGH` for $200ms$, then `LOW`.
4.  **Repeat:** The `loop()` function immediately restarts the sequence.

---
## 🛠️ Assembly Instructions

  Connect the GND pin of the Arduino to the negative rail of the breadboard.

  Place the LEDs on the breadboard (Anode = long leg, Cathode = short leg).

  Connect a 220 ohm resistor from each Cathode to the negative rail.

  Connect jumper wires from D12, D8, and D5 to the respective Anodes of the LEDs.

  Upload the code using the Arduino IDE.
