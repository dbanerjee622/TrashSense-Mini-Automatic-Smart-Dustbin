# TrashSense: DIY Mini Automatic Smart Dustbin 🗑️🤖
Turn a cardboard bin into a **magic, hands-free trash can**! This DIY smart dustbin uses an **Arduino Uno**, an **ultrasonic sensor**, and a **servo motor** to open automatically when you wave your hand. **No hands, no mess, just wave and toss!** A simple, fun, and hygenic gadget that makes tossing trash oddly satisfying!

---

## Features ✨

- **Hands-free operation** – Wave your hand and the lid opens automatically.  
- **Compact & DIY-friendly** – Built from simple materials like cardboard and small electronics.  
- **Educational & fun** – Learn about Arduino, sensors, and servo motors in one project.  
- **Hygienic** – Perfect for keeping your workspace or kitchen clean.  

---

## Components 🛠️

- Arduino Uno  
- Ultrasonic Sensor (HC-SR04 or similar)  
- Servo Motor (e.g., SG90)  
- Jumper wires  
- Breadboard (optional for prototyping)  
- Cardboard (or any small bin)  

---

## How It Works ⚡

1. The **ultrasonic sensor** detects your hand approaching the bin.  
2. The Arduino processes the signal.  
3. The **servo motor** opens the lid automatically.  
4. After a short delay, the lid closes on its own.  

This simple loop creates a **hands-free trash disposal system** that’s surprisingly satisfying to use!  

---

## Assembly Guide 📦

1. Build the cardboard bin with a hinged lid.  
2. Mount the servo motor to the lid and connect it to the Arduino.  
3. Wire the ultrasonic sensor to the Arduino.  
4. Upload the Arduino sketch (code included in this repo).  
5. Test and adjust the sensor range and servo movement.  
6. Enjoy your automatic smart dustbin!  

---

## Code 💻

The Arduino sketch handles:  

- Reading distance from the ultrasonic sensor.  
- Opening and closing the lid with the servo motor.  
- Timing the lid open duration for smooth operation.  

> Full code is included in `SmartDustbin.ino`.  

---

## Optional Improvements 🔧

- Add an **IR sensor** for even more accurate detection.  
- Use a **rechargeable battery** to make it portable.  
- Upgrade to a **larger bin** for more practical use.  

---

## License 📜

This project is **open-source**. Feel free to use, modify, and share your own versions!
