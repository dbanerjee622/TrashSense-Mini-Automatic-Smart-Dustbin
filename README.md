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

- [Arduino Uno](https://www.amazon.com/dp/B09ZQS2JRD?ref_=pe_125775000_1044873430_t_fed_asin_title)
- [Ultrasonic Sensor](https://www.electromaker.io/shop/product/ultrasonic-distance-sensor-33v-hc-sr04?gad_source=1&gad_campaignid=17338710367&gbraid=0AAAAAB8F3FkKZpUC445cQQrBlW_N8T5rC&gclid=CjwKCAjw5NvPBhAoEiwA_2egfsnBLWwACXJzN0t3X8lwKhGuesS7y0kkIt5jEDZ7AHTMFRHbNMzb6xoCiuYQAvD_BwE)
- [Servo Motor](https://www.digikey.com/en/products/detail/dfrobot/SER0043/7087197?gclsrc=aw.ds&gad_source=1&gad_campaignid=20243136172&gbraid=0AAAAADrbLli1AvpjIVGYFLMIvxmpbyfHW&gclid=CjwKCAjw5NvPBhAoEiwA_2egfv27T6s56KYeTePFmAmrNhLYbs346z1dnAnCgfFlUo9M5OVfDYm0_hoCvFIQAvD_BwE)  
- Jumper wires  
- Breadboard 
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

Follow these steps to assemble your DIY Mini Automatic Smart Dustbin:

### 1. Build the Cardboard Bin
1. Cut 4 trapezoid-shaped panels for the sides of the bin:
   - Top width: 10 inches  
   - Bottom width: 8 inches  
   - Height: 15 inches  
   *(These dimensions are a good starting point for a mini bin, but you can adjust as needed.)*  
2. Tape or glue the 4 panels together to form the bin structure.  
3. Cut a square piece for the bottom and attach it securely to the base.  
4. Create the lid:
   - Cut a rectangle larger than the top opening.  
   - Fold the extra edges over the top of the structure.  
   - Tape only the **back edge** of the lid to the structure.  
     > ⚠️ Do not tape the other edges—this allows the lid to open freely.  
5. **A final image is attached at the end**.

### 2. Install the Servo Motor
- Attach the servo motor near the top inside the bin.  
- Cut a small opening on the side for the wires to pass through.

### 3. Connect Electronics
1. Connect the servo motor to the Arduino and breadboard using jumper wires.  
2. Connect the ultrasonic sensor to the Arduino and breadboard.  
3. Secure the sensor to the **front of the bin** using tape or glue.
 
![Diagram Outline](https://imgur.com/a/0dp2IFM.png)

Retrived from [EAZYTRONIC](https://www.youtube.com/@eazytronic9394)'s [video](https://www.youtube.com/watch?v=lGzsB4BpDJA)

### 4. Prepare the Lid Mechanism
1. Attach a popsicle stick to the servo arm (or circular hub).  
   - The stick should point from the back of the bin to the front, **within the inside of the bin**.
   - Trim one end if necessary to allow full range of motion.  
2. This popsicle stick will lift the lid when the servo is activated.  
3. Close the lid and ensure the servo and stick can move freely.  
4. Reinforce the back of the lid to the bin structure using tape, glue, or another popsicle stick.

### 5. Upload the Code
1. Connect the Arduino to your computer.  
2. Upload the provided code using the Arduino IDE or PlatformIO.  
3. Test the bin:
   - Wave your hand in front of the sensor.  
   - Adjust sensor range or servo movement if needed.  

### 6. Final Checks
- Ensure the lid opens and closes smoothly.  
- Secure any loose wires or components.  

🎉 Congratulations! Your **Mini Automatic Smart Dustbin** is now ready to use!

   
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
