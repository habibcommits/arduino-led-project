# LED with Arduino Uno – README

This project demonstrates a simple **LED blinking circuit** using an **Arduino Uno**. A circuit diagram is provided along with clean and beginner‑friendly instructions.

---

## 📦 Components Required

* Arduino Uno
* LED (any color)
* 220Ω resistor
* Breadboard
* Jumper wires

---

## 🔌 Circuit Diagram

(Insert circuit diagram image here if available)

**Connections:**

* Arduino **Pin 13** → **Resistor** → **LED (long leg)**
* LED **short leg** → **GND** on Arduino

Pin 13 already has a built‑in current‑limiting resistor on the board, but an external resistor is still recommended to protect the LED.

---

## 🧠 How It Works

The Arduino sends HIGH and LOW signals to the LED pin. When HIGH, the LED turns ON. When LOW, the LED turns OFF.

---

## 💻 Arduino Code

```cpp
void setup() {
  pinMode(13, OUTPUT); // Initialize pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // Turn LED ON
  delay(1000);            // Wait 1 second
  digitalWrite(13, LOW);  // Turn LED OFF
  delay(1000);            // Wait 1 second
}
```

---

## ⚙️ How to Upload

1. Open Arduino IDE.
2. Copy–paste the code.
3. Select **Tools → Board → Arduino Uno**.
4. Select **Port**.
5. Click **Upload**.

---

## 📝 Notes

* You can change the blinking speed by adjusting the `delay()` time.
* You can use any digital pin by updating the code accordingly.

---
## follow this circuit diagram .
<img width="100%" alt="image" src="https://github.com/user-attachments/assets/b90a6e59-01cc-453b-a354-2933b39982ff" />


If you want an **image circuit diagram inserted**, **PDF version**, or **multi‑LED version**, just ask! at dev@habibsehani.com
