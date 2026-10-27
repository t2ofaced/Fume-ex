# Fume-ex

Fume-ex is a diy fume extractor I built for myself, it pulls soldering fumes away from my deskspace so i dont have to breathe them in,
it runs on 12V DC and has two main parts a custom PCB and a 12V fan, the PCB has an ESP-12E on it so the plan is to control it from a phone as well but not for now

## Working

Fume-ex have 2 buttons on the board UP and DOWN btn as the name says UP btn increase the speed of fan and down btn decrease the speed if fan and the board also have 4 LEDs which change their color according to the Speed of fan.

| Speed | Fan  | LED color |
|-------|------|-----------|
| 1     | ~30% | Green     |
| 2     | ~50% | Yellow    |
| 3     | ~75% | Orange    |
| 4     | 100% | Red       |

## Schematics & Circuitry

This PCB was desigined in KiCad 10.0
<img width="1128" height="756" alt="image" src="https://github.com/user-attachments/assets/88d8833a-0535-4302-b71a-1fbde0cf1cd8" />

Routing
<img width="1320" height="566" alt="image" src="https://github.com/user-attachments/assets/62ab758d-116d-4de7-a877-e4e4007e074a" />

Bottom side 
<img width="1298" height="620" alt="image" src="https://github.com/user-attachments/assets/b0081213-3766-4005-b016-153a6ebe4839" />

Top side
<img width="1245" height="601" alt="image" src="https://github.com/user-attachments/assets/c9f3095e-b52f-47d2-be8d-dab966c16dec" />

Note- The top layer of pcb where most of the componets are placed will be on bottom side when we will screw pcb and case together

## CAD & Case Design

Mechanical part / CAD is desigined in 4 parts so that it can be printed easily
Onshape - https://cad.onshape.com/documents/52f7c11b6668c09d0c33dd75/w/9eb0015b3a1bfa4b51811258/e/8c4dfcc336f707a1c31151c4

Main Frame
<img width="928" height="697" alt="image" src="https://github.com/user-attachments/assets/5fe47ab9-0ce9-4a34-975b-bb684619c51b" />


Front Grill
<img width="942" height="521" alt="image" src="https://github.com/user-attachments/assets/97d201d9-8a2b-4d75-a0b4-1fc599e9aaea" />


Back Grill
<img width="938" height="650" alt="image" src="https://github.com/user-attachments/assets/c70488ba-b099-4126-a497-76dfd100e88c" />


Top Plate
<img width="957" height="700" alt="image" src="https://github.com/user-attachments/assets/dcdfd555-46b9-4159-88b3-08562a79139f" />


Together
<img width="678" height="700" alt="image" src="https://github.com/user-attachments/assets/c63709e2-b470-407a-8788-32b7eba2731c" />



Right now it only works with the buttons. WiFi and phone control are not added yet.

