# 7-Segment Display Counter (Common Anode)

## 1. Project Description
This project demonstrates how to interface a **7-Segment Display** with an Arduino Uno to create a decimal counter. The program cycles through digits **0 to 9** at one-second intervals and loops indefinitely. This setup specifically utilizes a **Common Anode** configuration.

---

## 2. Basic Knowledge
A 7-segment display is a form of electronic display used to show decimal numerals. It consists of 8 internal LEDs: seven for the digit segments ($a$ through $g$) and one for the decimal point ($DP$).


### Segment Identification
* **Horizontal Segments:** $a$ (top), $g$ (middle), $d$ (bottom).
* **Vertical Segments:** $f, e$ (left side) and $b, c$ (right side).

---

## 3. Classification: Common Anode
In this project, we use a **Common Anode (CA)** display. 

* **Internal Wiring:** The positive terminals (Anodes) of all 8 LEDs are tied together to a single common pin.
* **Power Connection:** The common pin is connected to the **5V** supply of the Arduino.
* **Control Logic:** To light up a segment, the microcontroller must pull the corresponding pin **LOW** (0V). 
  * **LOW (0)** = Segment ON
  * **HIGH (1)** = Segment OFF

---

## 4. Hardware Wiring
Based on the circuit configuration, the pins are connected as follows:

| Segment | Arduino Pin | Logic (To Turn ON) |
| :--- | :--- | :--- |
| **a** | Pin 7 | LOW |
| **b** | Pin 6 | LOW |
| **c** | Pin 5 | LOW |
| **d** | Pin 4 | LOW |
| **e** | Pin 3 | LOW |
| **f** | Pin 2 | LOW |
| **g** | Pin 8 | LOW |
| **Common** | **5V** | N/A |


---



  }
}

void displayDigit(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], digitMap[num][i]);
  }
}
