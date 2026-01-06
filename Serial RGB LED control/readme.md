# 🎨 Serial Controlled LED Color System

## 📌 Project Description

**Serial Controlled LED Color System** is an Arduino-based project that allows users to control LED colors using text input from the **Serial Monitor**.  
The user enters a color name, and the corresponding LED glows accordingly.

This project demonstrates the use of **serial communication** and **digital output control** in Arduino, making it ideal for beginners.

---

## 🧠 How It Works

1. The Arduino continuously reads input from the **Serial Monitor**.
2. The user types one of the supported color commands:
   - `red`
   - `green`
   - `blue`
3. Based on the input:
   - The selected color LED turns **ON**
   - All other LEDs turn **OFF**
4. If an invalid command is entered, no LED glows.

---

## 🧩 Components Used

- Arduino UNO  
- Breadboard  
- 3 × LEDs (Red, Green, Blue)  
- 3 × Current limiting resistors (220Ω or 330Ω)  
- Jumper wires  
- USB cable  

---

## 🔌 Circuit Connections

### LED Pin Mapping

| LED Color | Arduino Pin | Resistor |
|----------|-------------|----------|
| Red      | D9          | 220Ω     |
| Green    | D10         | 220Ω     |
| Blue     | D11         | 220Ω     |

- LED **Anode (+)** → Arduino digital pin through resistor  
- LED **Cathode (–)** → GND  

---

## 🖥️ Serial Monitor Configuration

- **Baud Rate:** `9600`
- **Line Ending:** `Newline` or `No line ending`

---


