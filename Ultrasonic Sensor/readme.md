# Ultrasonic Distance Meter with I2C LCD Display

## 1. Project Description
This project utilizes an **HC-SR04 Ultrasonic Sensor** and an **Arduino Uno** to measure the distance between the sensor and an object. The calculated distance is then displayed in real-time on a **16x2 LCD screen** (equipped with an I2C module for simplified wiring). 

This system is ideal for applications such as proximity sensing, water level monitoring, or obstacle avoidance in robotics.

---

## 2. Basic Knowledge

### HC-SR04 Ultrasonic Sensor
The HC-SR04 works on the principle of SONAR. It emits an ultrasonic pulse at 40kHz which travels through the air. If there is an object or obstacle, the pulse bounces back to the sensor.

* **Trigger Pin:** Used to send the ultrasonic pulse.
* **Echo Pin:** Used to listen for the reflected pulse.

### I2C LCD Display
Using an I2C adapter allows the LCD to be controlled using only two data pins (SDA and SCL) instead of the traditional 6+ pins, significantly reducing wiring complexity.

---

## 3. Hardware Components
* **Arduino Uno**
* **HC-SR04 Ultrasonic Sensor**
* **16x2 LCD Display (with I2C Module)**
* **Breadboard and Jumper Wires**

---

## 4. Circuit Wiring Table

| Component | Component Pin | Arduino Pin |
| :--- | :--- | :--- |
| **Ultrasonic Sensor** | VCC | 5V |
| **Ultrasonic Sensor** | Trig | Pin 10 |
| **Ultrasonic Sensor** | Echo | Pin 9 |
| **Ultrasonic Sensor** | GND | GND |
| **I2C LCD** | VCC | 5V |
| **I2C LCD** | GND | GND |
| **I2C LCD** | SDA | A4 |
| **I2C LCD** | SCL | A5 |

---
### Summary of the Setup
* **Sensor Logic:** The code triggers the `trigPin` and measures the time it takes for the signal to return to the `echoPin`. The distance is calculated using the formula $Distance = \frac{Time \times Speed\ of\ Sound}{2}$.
* **Display Logic:** The LCD updates every 500ms to provide a stable, readable output.



