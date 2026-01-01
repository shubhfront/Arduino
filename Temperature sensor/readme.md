# Arduino Temperature Alert System with LCD & Buzzer

This project uses an **Arduino Uno** and a **TMP36 Temperature Sensor** to monitor environmental heat. The system provides real-time visual feedback on an I2C LCD and triggers audio-visual alarms based on a specific temperature threshold.

---

## 🚀 Features

* **Real-time Monitoring:** Displays current temperature on a 16x2 I2C LCD screen.
* **Safety Indicators:** * **Green LED:** Glows when the temperature is safe (below 100°C).
    * **Red LED:** Glows when the temperature exceeds the 100°C threshold.
* **Audible Alarm:** A piezo buzzer sounds an alert when the temperature is above 100°C.

---

## 🛠 Circuit Components

| Component | Description |
| :--- | :--- |
| **Arduino Uno** | Microcontroller core |
| **TMP36** | Analog temperature sensor |
| **LCD 16x2 (I2C)** | Displays temperature data |
| **Piezo Buzzer** | Audio alert for high temperatures |
| **LEDs** | Green (Safe) and Red (Danger) |
| **Resistors** | 220Ω resistors for LED current limiting |

---

## 🎮 Logic & Controls

The system operates automatically based on the following logic:

1. **Temperature < 100°C:**
    * LCD displays: `Temp: [Value] C`
    * **Green LED** = ON
    * **Red LED** = OFF
    * **Buzzer** = Silent

2. **Temperature ≥ 100°C:**
    * LCD displays: `ALARM! High Temp`
    * **Green LED** = OFF
    * **Red LED** = ON
    * **Buzzer** = Pulsing Alert Sound

---

