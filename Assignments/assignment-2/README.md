# LED Fading without analogWrite()

[view tinkercad]("https://www.tinkercad.com/things/eoUk40moL7c-assignment2?sharecode=AJGg30IHb3Yb16a7WjMn5xAxs6q4GHInlN0Db4403L8")

---

📌 Overview

This project demonstrates how to control LED brightness without using analogWrite().
Instead, brightness is adjusted by changing the ON and OFF delay times of a digital signal — a method known as software PWM (Pulse Width Modulation).

The LED gradually fades from dim → bright → dim in a continuous loop.


---

## ⚙️ Components Used

Arduino Uno

LED

100Ω resistor

Breadboard

Jumper wires


---

## 🔌 Circuit Connections

Component	Arduino Pin

LED Anode (+)	Digital Pin 9
LED Cathode (−)	GND (via 220Ω resistor)

![diagram]("img.png")


---

## 💡 Working Principle

The LED is turned ON for a short time and OFF for a short time.

By increasing the ON time and decreasing the OFF time, brightness increases.

By doing the reverse, brightness decreases.

This simulates analog brightness using digital signals.
