 𝗦𝗠𝗔𝗥𝗧 𝗦𝗣𝗜𝗡𝗔𝗟 𝗕𝗥𝗔𝗖𝗘

<p align="center">
  <b>AI-Based Biometric Spinal Tracking Smart Brace</b><br>
  <i>Real-time posture monitoring and correction using ESP32 and MPU6050</i>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Board-ESP32-blue" alt="ESP32">
  <img src="https://img.shields.io/badge/Sensor-MPU6050-green" alt="MPU6050">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-orange" alt="C++">
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen" alt="Status">
</p>

---

𝗢𝗩𝗘𝗥𝗩𝗜𝗘𝗪

Poor posture during prolonged sitting or standing can lead to chronic back pain and long-term musculoskeletal problems. This project provides a compact, energy-efficient solution to monitor spinal alignment continuously and deliver instant feedback, helping users improve their posture.

> **Intended Users:** Students, office workers, and individuals undergoing posture correction.

 𝗞𝗘𝗬 𝗙𝗘𝗔𝗧𝗨𝗥𝗘𝗦

-  Real-time tilt measurement using pitch and roll angles
-  Four-level posture classification: Good, Moderate, Bad, and Very Bad
-  Instant audio feedback through different buzzer tones
-  LED indicator for visual alerts
-  Live angle measurements and posture status on the Serial Monitor
-  Wi-Fi and Bluetooth support for future expansion

 𝗛𝗔𝗥𝗗𝗪𝗔𝗥𝗘 𝗨𝗦𝗘𝗗

| Component | Purpose |
|---|---|
| `ESP32` | Main microcontroller |
| `MPU6050` | 3-axis accelerometer and gyroscope |
| `Buzzer` | Audio alerts |
| `LED` | Visual alerts |
| Jumper Wires | Hardware connections |
| Power Supply | Provides operating power |

 𝗖𝗜𝗥𝗖𝗨𝗜𝗧 𝗖𝗢𝗡𝗡𝗘𝗖𝗧𝗜𝗢𝗡𝗦

| Component | Pin | ESP32 Pin |
|---|---|---|
| MPU6050 | VCC | `3V3` |
| MPU6050 | GND | `GND` |
| MPU6050 | SDA | `GPIO 21` |
| MPU6050 | SCL | `GPIO 22` |
| Buzzer | + | `GPIO 33` |
| Buzzer | - | `GND` |
| LED | + | `GPIO 12` |
| LED | - | `GND` |

 #𝗛𝗢𝗪 𝗜𝗧 𝗪𝗢𝗥𝗞𝗦

1. The MPU6050 collects acceleration data through the I2C interface.
2. The ESP32 processes the sensor readings to calculate pitch and roll angles.
3. The measured pitch angle is compared against predefined thresholds.
4. The system classifies the posture and activates the corresponding alert.
5. The posture status and angle readings are displayed on the Serial Monitor.

 Posture Classification

| Pitch Angle | Posture Status | Alert |
|---|---|---|
| Below 10° | 🟢 Good Posture | No alert |
| 10°–20° | 🟡 Moderately Bad | Low-tone buzzer + LED |
| 20°–35° | 🟠 Bad Posture | Mid-tone buzzer + LED |
| Above 35° | 🔴 Very Bad | High-tone buzzer + LED |

Example Serial Monitor Output

```text
Pitch Angle: 25.30
BAD POSTURE
```

 𝗚𝗘𝗧𝗧𝗜𝗡𝗚 𝗦𝗧𝗔𝗥𝗧𝗘𝗗

1. Install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Install the ESP32 board package.
3. Open the `spinal_brace.ino` source file.
4. Select the appropriate ESP32 board and COM port.
5. Upload the program to the ESP32.
6. Open the Serial Monitor and set the baud rate to **57600**.
7. Mount the sensor securely on the back and test the posture alerts.

 𝗙𝗨𝗧𝗨𝗥𝗘 𝗦𝗖𝗢𝗣𝗘

-  AI/ML-based personalized posture recognition
-  Mobile application integration
-  Cloud-based posture analysis and history tracking
-  Wireless data logging through Wi-Fi and Bluetooth
-  Adaptive thresholds to reduce false alerts
-  Improved power efficiency for wearable operation

 𝗦𝗞𝗜𝗟𝗟𝗦 𝗗𝗘𝗠𝗢𝗡𝗦𝗧𝗥𝗔𝗧𝗘𝗗

- Embedded programming using the ESP32 and Arduino framework
- I2C communication and MPU6050 sensor interfacing
- Tilt angle calculation using accelerometer data
- Real-time embedded system development
- Hardware interfacing and alert system implementation
- Wearable technology prototyping

 𝗔𝗨𝗧𝗛𝗢𝗥

**Sujitha S**

Diploma in Computer Engineering & IT Infrastructure

🔗 GitHub: [Sujitha250308](https://github.com/Sujitha250308)

---

<p align="center">
  <b>🦴 Smart Spinal Brace</b><br>
  <i>Smart Technology for Better Posture</i>
</p>
