# Fume-ex

Fume-ex is a DIY fume extractor that i built for myself it pulls soldering fumes away from my desk space so i don't have to breathe them in, it runs on 12V DC and has two main parts, a custom PCB and a 12V fan. The PCB has an ESP-12E on it, so the plan is to control it from a phone as well, but not for now.

## Working

Fume-ex has 2 buttons on the board, UP and DOWN button as the name says, the UP button increases the speed of the fan and the DOWN button decreases the speed of the fan, the board also has 4 LEDs which change their color according to the speed of the fan.

| Speed | Fan  | LED color |
|-------|------|-----------|
| 1     | ~30% | Green     |
| 2     | ~50% | Yellow    |
| 3     | ~75% | Orange    |
| 4     | 100% | Red       |

## Schematics & Circuitry

This PCB was designed in KiCad 10.0.

<p align="center">
  <img src="https://github.com/user-attachments/assets/88d8833a-0535-4302-b71a-1fbde0cf1cd8" alt="Schematic" width="800">
  <br>
  <em>Schematic</em>
</p>

### Routing

<p align="center">
  <img src="https://github.com/user-attachments/assets/62ab758d-116d-4de7-a877-e4e4007e074a" alt="PCB routing" width="800">
  <br>
  <em>Routing</em>
</p>

### Bottom Side

<p align="center">
  <img src="https://github.com/user-attachments/assets/b0081213-3766-4005-b016-153a6ebe4839" alt="PCB bottom side" width="800">
  <br>
  <em>Bottom side</em>
</p>

### Top Side

<p align="center">
  <img src="https://github.com/user-attachments/assets/c9f3095e-b52f-47d2-be8d-dab966c16dec" alt="PCB top side" width="800">
  <br>
  <em>Top side</em>
</p>

> **Note:** The top layer of the PCB where most of the components are placed will be on the bottom side when we screw the PCB and case together.

## CAD & Case Design

The mechanical part / CAD is designed in 4 parts so that it can be printed easily.

**Onshape:** [Open CAD model](https://cad.onshape.com/documents/52f7c11b6668c09d0c33dd75/w/9eb0015b3a1bfa4b51811258/e/8c4dfcc336f707a1c31151c4)

### Main Frame

<p align="center">
  <img src="https://github.com/user-attachments/assets/5fe47ab9-0ce9-4a34-975b-bb684619c51b" alt="Main frame" width="700">
  <br>
  <em>Main Frame</em>
</p>

### Front Grill

<p align="center">
  <img src="https://github.com/user-attachments/assets/97d201d9-8a2b-4d75-a0b4-1fc599e9aaea" alt="Front grill" width="700">
  <br>
  <em>Front Grill</em>
</p>

### Back Grill

<p align="center">
  <img src="https://github.com/user-attachments/assets/c70488ba-b099-4126-a497-76dfd100e88c" alt="Back grill" width="700">
  <br>
  <em>Back Grill</em>
</p>

### Top Plate

<p align="center">
  <img src="https://github.com/user-attachments/assets/dcdfd555-46b9-4159-88b3-08562a79139f" alt="Top plate" width="700">
  <br>
  <em>Top Plate</em>
</p>

### Together

<p align="center">
  <img src="https://github.com/user-attachments/assets/c63709e2-b470-407a-8788-32b7eba2731c" alt="Assembled view 1" width="380">
  <img src="https://github.com/user-attachments/assets/95e70f4a-6555-4934-9339-2ad470a8db87" alt="Assembled view 2" width="480">
</p>


## Status

Right now it only works with the buttons. WiFi and phone control are not added yet.

