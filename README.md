# bridge-soil-moisture-sensor
Arduino reads soil, LDR, potentiometer, compares values, controls LEDs and buzzer, then repeats monitoring continuously for smart plant system.
# Soil Moisture Sensor System 🌱💧

## Project Description
This project is a **Soil Moisture Sensor System** built using **Arduino Uno**.  
It helps monitor soil condition by detecting whether the soil is dry or wet.

When the soil is dry:

- 🔴 Red LED turns ON  
- 🔔 Buzzer sounds alert  

When the soil has enough water:

- 🟢 Green LED turns ON  
- 🔴 Red LED turns OFF  
- 🔔 Buzzer turns OFF  

This system is useful for smart farming, gardens, and automatic plant care.

---

## Components Used
- Arduino Uno R3  
- Breadboard  
- Soil Moisture Sensor  
- Potentiometer  
- Red LED  
- Green LED  
- Buzzer  
- Jumper Wires  

---

## Circuit Connections

| Component | Arduino Pin |
|----------|-------------|
| Red LED | Pin 2 |
| Green LED | Pin 3 |
| Buzzer | Pin 6 |
| Soil Moisture Sensor | A0 |
| Potentiometer | A1 |

---

## How It Works
1. Soil moisture sensor reads water level in the soil.  
2. If soil is dry, red LED turns ON and buzzer alerts.  
3. If soil is wet, green LED turns ON.  
4. Potentiometer can be used to adjust sensitivity.  

