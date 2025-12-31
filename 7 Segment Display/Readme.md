# 7-Segment Display Interfacing Project

## 1. Project Description
This project focuses on the fundamental concepts and interfacing of a **7-Segment Display**. A 7-segment display is an electronic component used to display decimal numbers and a limited set of characters. It serves as a cost-effective alternative to complex screens for devices like digital clocks, meters, and home appliances.

---

## 2. Basic Knowledge
A 7-segment display consists of **8 LEDs** in total:
* **7 segments** (labeled $a$ to $g$) forming the digit.
* **1 decimal point** (labeled $DP$) for fractional numbers.



### Segment Layout
The segments are arranged in a specific pattern to form numbers:
* **Top:** $a$
* **Middle:** $g$
* **Bottom:** $d$
* **Sides:** $b, c$ (right) and $e, f$ (left)

---

## 3. Classifications & Types
7-segment displays are classified based on their internal wiring configuration:

### A. Common Cathode (CC)
* **How it works:** All the negative terminals (cathodes) of the LEDs are connected to a single common pin.
* **Control:** To turn a segment **ON**, you send a **HIGH** signal (1) to that segment's pin.
* **Common Pin Connection:** Connected to **Ground (GND)**.

### B. Common Anode (CA)
* **How it works:** All the positive terminals (anodes) of the LEDs are connected to a single common pin.
* **Control:** To turn a segment **ON**, you send a **LOW** signal (0) to that segment's pin.
* **Common Pin Connection:** Connected to **VCC (5V or 3.3V)**.



---

## 4. Hardware Connection Table
| Segment | Pin Label | Function |
| :--- | :--- | :--- |
| **a** | Segment A | Top horizontal bar |
| **b** | Segment B | Top right vertical bar |
| **c** | Segment C | Bottom right vertical bar |
| **d** | Segment D | Bottom horizontal bar |
| **e** | Segment E | Bottom left vertical bar |
| **f** | Segment F | Top left vertical bar |
| **g** | Segment G | Middle horizontal bar |
| **DP** | Decimal Point | Dot at the bottom right |

---

## 5. Summary of Logic
| Display Type | To turn LED ON | To turn LED OFF |
| :--- | :--- | :--- |
| **Common Cathode** | Logic HIGH (1) | Logic LOW (0) |
| **Common Anode** | Logic LOW (0) | Logic HIGH (1) |

> **Note:** Always use current-limiting resistors (usually 220Ω to 330Ω) between the microcontroller pins and the display segments to prevent damage.
