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


### PCB Quote

<p align="center">
  <img src="https://github.com/user-attachments/assets/4b2f5c22-1baa-4b08-9965-82cc51e34eee" alt="PCB Quote" width="800" >
  <br>
  <em>PCB Quote</em>
</p>



> **Note:** The top layer of the PCB where most of the components are placed will be on the bottom side when we screw the PCB and case together.

## CAD & Case Design

The mechanical part / CAD is designed in 4 parts so that it can be printed easily.

**Onshape:** [Open CAD model](https://cad.onshape.com/documents/52f7c11b6668c09d0c33dd75/w/9eb0015b3a1bfa4b51811258/e/8c4dfcc336f707a1c31151c4)
**Onshape:** [Assembly Link](https://cad.onshape.com/documents/52f7c11b6668c09d0c33dd75/w/9eb0015b3a1bfa4b51811258/e/7d99a588d10e8d80c5f6bc5e)



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


## Assembly Instructions

Assembly of this device is easy peasy

### Step 1

just Screw Fan and Main body of fume extractor with M3 Screws

<img width="1107" height="865" alt="Screenshot 2026-11-09 094551" src="https://github.com/user-attachments/assets/35dbc54e-a9a3-448b-a391-3efdab67d02f" />

this should look like this, Blue marks are the slot where we have to screw M3

<img width="935" height="757" alt="Screenshot 2026-11-09 094628" src="https://github.com/user-attachments/assets/7a6319dc-7dba-408a-a3d7-dc6d18a195b4" />

<img width="947" height="882" alt="Screenshot 2026-11-09 094622" src="https://github.com/user-attachments/assets/77b31153-31ed-4ce6-a44a-1ad2213d7bf4" />

### Step 2

Screw PCB and Top Plate with M3 Screws

place PCB like this

<img width="1040" height="532" alt="Screenshot 2026-11-09 095517" src="https://github.com/user-attachments/assets/c3d2e344-e74a-47cf-8b36-e26174b1ab5b" />

then add top plate on the top of the pcb like this

<img width="910" height="815" alt="Screenshot 2026-11-09 095526" src="https://github.com/user-attachments/assets/fc5c49c0-0aa7-44be-b95e-c3bf8a5c2a2d" />

<img width="1130" height="753" alt="Screenshot 2026-11-09 094749" src="https://github.com/user-attachments/assets/c45778e9-69d9-4f8b-8dd4-e0d2bc86cb4a" />

And just screw them

Now this should look like this

<img width="1083" height="870" alt="Screenshot 2026-11-09 094815" src="https://github.com/user-attachments/assets/f5fae823-bbee-4ff7-b754-9c7a5c2fe5e8" />

### Step 3

Screw Back Panel with main case with m3 screws

<img width="1115" height="885" alt="Screenshot 2026-11-09 094831" src="https://github.com/user-attachments/assets/4a749b4c-0bbd-416d-9362-93b07fa1d7c2" />

### Step 4

Screw Front Panel with case with M3 screw

<img width="1010" height="880" alt="Screenshot 2026-11-09 094850" src="https://github.com/user-attachments/assets/9b300ee5-96dd-4b97-8d83-8eb788563d3f" />

DONEEEEEEEEEEE




## Bill of Materials

| Part Name | Quantity | Link | Info | Price (USD) |
|-----------|:--------:|------|------|------------:|
| JLCPCB PCBA Manufacturing & Shipping | 2 | [Link](https://jlcpcb.com/) | PCB | $44.53 |
| WS2812B LED | 1 | [Link](https://quartzcomponents.com/products/ws2812b-smd3535-mini-4-pin-rgb-smd-led?variant=45039228223722) | WS2812B | $0.3 |
| Tactile Switches 12mm | 4 | [Link](https://robu.in/product/1-month-warranty-762/) | Switches | $0.15 |
| DC Jack | 1 | [Link](https://robu.in/product/dc-jack-005a/) | DC JACK | $0.15 |
| Screw Terminal | 1 | [Link](https://robu.in/product/xy128vc-5-0-xinya-2-pin-screw-terminal-blockgreen/) | Screw Terminal | $0.2 |
| 1X05 Male Connector | 2 | [Link](https://sharvielectronics.com/product/5x1-5pin-male-right-angle-berg-header-connector-6mm-2-54mm-pitch/) | 5 pin male | $0.2 |
| ESP-12E ESP8266 | 1 | [Link](https://robu.in/product/esp-12e/) | MCU | $3.56 |
| SPST SMD Tactile Switches | 4 | [Link](https://robu.in/product/1-month-warranty-470/) | SPST SMD Tactile Switches | $0.13 |
| Axial Cooling Fan | 1 | [Link](https://www.amazon.in/FEDGER-Performance-Electronics-Industrial-Equipment/dp/B0H7C37SRT) | Axial Cooling Fan | $5.78 |
| Air Carbon Filter | 1 | [Link](https://www.amazon.in/Carbon-Filter-Sqair-Air-Purifier/dp/B082TZCQNN?source=ps-sl-shoppingads-lpcontext&psc=1&smid=AEQ5S1BXH0VBO) | Air Carbon Filter | $12 |
| **TOTAL** | | | | **~ $65** |

## Status

Right now it only works with the buttons. WiFi and phone control are not added yet.

