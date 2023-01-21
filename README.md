# temperature-circuit-sculpture
A circuit sculpture to tell you the temperature of the room you are in while also looking nice on a shelf.

This sculpture is built using electronic components, brass rods, and walnut.

![photo of front of circuit sculpture](images/circuit-sculpture-front-1.webp)






## Materials

| Part      | Quantity | Notes| 
| :-------------- | :---: | :------ |
| Arduino Uno | 1 | You can use any arduino you want but for the size of this build, an Uno works really well|
| 1mm brass rod |  | K&S Metals |
| wire    |  | Gives the sculpture a bit of variety, instead of being all brass rod |
| 220 ohm resistor  | 1 | Higher resistance value if you want the light to be dimmer| 
| LED  | 1 | your preferred color| 
| DHT11| 1 | Temperature sensor. This build uses the 3-pin version |
| SSD1306 OLED   | 1 | 128x32 |
| Wall Adapter  | 1 | Needs to be between 5-12V|
| Nano Tape  | 1 | Any brand will do|




## Code
The code included here is written in C++. It is a .ino file, which can be opened in the arduino IDE. Just download the relevant libraries and it should work right out of the box.

If you would like to use a different IDE (PlatformIO in VSCode for instance) you will just need to add
```
#include <Arduino.h>
```
at the top of the file.

## Assembly
The build uses 1mm brass rods as most of it's wiring. K&S Metals on Amazon is the best source for these. It's important to use 1mm exactly, because that is what fits into the GPIO pins of Arduino boards.

Brass rods have a few big things going for them.
1. Hold solder very well
2. Pliable, while still able to retian shape
3. Look nice

> **Note**
>I chose to keep the two I2C wires for the OLED as regular wires, while everything else is brass rods. This was for purely asthetic reasons - I wanted some variety. You don't need to do the same.

![photo of front of back of circuit sculpture](images/circuit-sculpture-back.webp)

Attaching the components to the wood is done with "nano tape" which is basically really heavy duty double-sided tape. It works extremely well for this type of application, the components have never moved around at all.

### Wiring Diagram
*(The temperature sensor and OLED display pictured here don't look like exactly like the actual components, don't let that throw you.)*
![circuit sculpture wiring diagram](images/sculpture-circuit-diagram.png)
Since we are powering this device via the VIN pin, you want to provide a bit more than 5 volts. I used a 9V wall adapter, which works great. Just snip off whatever connector is on the end, and strip 4-5mm of insulation off the end. Tin it with solder, and you can easily insert them into the arduino pins. Just make sure you use a multimeter to verify which wire is Positive and which is Ground!


## Wood

Brass rod pairs nicely with walnut, and I had a bunch left over from a larger project. I used Rubio Monocoat ("pure" color) as a finish. I highly recommend it as a finish in general, but it's definitely overkill for this project if you don't already have it already on hand. 

so if your looking for something else, I would recommend any basically any kind of oil finish. This piece is really not going to get any kind of wear & tear, and oil finished look the best (imo).

![photo of front of circuit sculpture](images/circuit-sculpture-front-4.webp)

