# I2C LCD Greeting System

## 📝 Description
This project focuses on alphanumeric data visualization using a 16x2 Liquid Crystal Display (LCD) integrated with an I2C Serial Interface. Unlike standard LCD wiring which requires 6+ digital pins, this system utilizes the I2C protocol to communicate over just two pins (SDA and SCL). The firmware is programmed to cycle through a personalized greeting sequence with timed screen clears..

---

## 🖼️ Circuit-Layout
The I2C interface significantly simplifies the wiring, connecting directly to the Arduino's Analog pins designated for data communication.
---

### Pin Mapping (Based on Diagram)
| LCD Pin (I2C) | Arduino Pin | Connectoin Type | Function |
| :--- | :--- | :--- | :--- |
| **GND** | GND | Power | Ground |
| **VCC** | 5V | Power | 5V Supply |
| **SDA** | A4  | Data | Serial Data Line |
| **SCL** | A5 | Clock | Serial Clock Line |

---
## ⚙️ How it Works

### 1. I2C Protocol Logic
The Arduino acts as the "Master" and the LCD as the "Slave." By using pins A4 (SDA) and A5 (SCL), the Arduino sends hexadecimal addresses to the display. This allows for complex text rendering while leaving almost all digital pins free for other sensors or actuators.

### 2. Software Logic
The firmware utilizes the LiquidCrystal_I2C library to handle the communication overhead.

    Initialization: The backlight is enabled and the LCD is "homed" (cursor moved to 0,0).

    Step 1: "Hello World" is printed.

    Step 2: The lcd.clear() command is called to wipe the buffer.

    Step 3: A personalized message ("I am Shubham") is displayed.

    Loop: The loop() function ensures the display refreshes continuously.
---
## 🛠️ Assembly Instructions
1. I2C Module: Ensure your LCD has the I2C backpack (the small black board on the back) soldered on.

2. Wiring: * Connect GND and VCC to the Arduino power rails.

    Connect SDA to Arduino Pin A4.

    Connect SCL to Arduino Pin A5.

3. Library: You must install the LiquidCrystal I2C library by Frank de Brabander via the Arduino Library Manager before uploading.

4. Contrast: If text doesn't appear, use a small screwdriver to turn the blue potentiometer on the back of the LCD module.

---
