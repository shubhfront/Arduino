# Arduino 2WD Robot Control (L293D)

This project uses an **Arduino Uno** and an **L293D Motor Driver** to control a two-wheeled robot via Serial Monitor commands. 

## 🛠 Circuit Configuration

The circuit is powered by a 9V battery for the motors, while the Arduino provides the logic voltage.

### Wiring Details:
* **L293D Pin 8 (VCC2):** Connected to 9V Battery (+) for motor power.
* **L293D Pin 16 (VCC1):** Connected to Arduino 5V for chip logic.
* **Common Ground:** Arduino GND and 9V Battery (-) are tied to the same breadboard rail.
* **Left Motor:** Controlled by Arduino Pins 9 & 10.
* **Right Motor:** Controlled by Arduino Pins 5 & 6.

---

## 🎮 Controls

Open the **Serial Monitor** in the Arduino IDE (set to 9600 baud) and use the following keys:

| Key | Action |
| :--- | :--- |
| **w** | Move Forward |
| **s** | Move Backward |
| **a** | Turn Left |
| **d** | Turn Right |
| **x** | Stop |

---



