# RP2040-1.14LCD

![image](https://github.com/01Space/RP2040-1.14LCD/blob/main/image/RP2040-LORA%20(1).jpg)

# There are 6 versions for you to choose from

Without Lora version

With Lora version

With SX1278(410-525MHz，+18dBm)

With SX1262(803-930MHz,+22dBm)

With SX1268(410-525MHz,+22dBm)

With LLCC68(410-525MHz,+22dBm)

With SX1280(Coming soon)

# If you select the sx127x module version, the SD card read / write function will not be supported

# programming in micropython

To program the Raspberry Pi Pico using Micropython, you can either use:
1. Thonny IDE
2. uPyCraft IDE

But before getting started with Raspberry Pi Pico, you have to install MicroPython on Raspberry Pi Pico Board.

Installing MicroPython on Raspberry Pi Pico
1. Push and hold the BOOTSEL button on the Pico, & then immediately connect the Pico Board to your computer using a micro USB cable. Release BOOTSEL once the drive RPI-RP2 appears on your computer.

2. Open the RPI-RP2 drive that appears in the Drives tab.

3. Download the MicroPython UF2 file (https://micropython.org/download/rp2-pico/)

4. Drag and drop the UF2 file onto the RPI-RP2 drive. The Raspberry Pi Pico with RPwill reboot and will now run MicroPython.

# Getting Started with Raspberry Pi Pico using MicroPython on Thonny IDE
1. Now let us get started with Raspberry Pi Pico using MicroPython on Thonny IDE. First you have to download Thonny from the https://thonny.org/

2. Connect the Raspberry Pi Pico to your computer. Then from Thonny go to Tools > Options and click on the Interpreter tab. From the interpreter dropdown list, select MicroPython (Raspberry Pi Pico). The port dropdown menu can be left to automatically detect the Pico. Click Ok to close.

3. When you plugin the pico Board, a firmware installation tab will appear for raspberry pi pico. Click on Install & some files will be downloaded.

4. After successful installation, the MicroPython version and Raspberry board will appear in the Python Shell. To test we can write a quick print function to say “Hello World”. Press Enter to run the code. You will get Hello World as a response.

# Using arduinocore mbed

With ArduinoCore-mbed Release 2.0.0, Arduino now support Raspberry Pi Pico officially. To program Raspberry Pi Pico in Arduino framework, install Arduino Mbed OS RP2040 Boards in Arduino IDE's Library Manager.

![image](https://github.com/01Space/RP2040-0.42LCD/blob/main/image/Arduino%20Mbed%20OS%20RP2040%20Boards.jpg)

# Using earlephilhower/arduino-pico
https://github.com/earlephilhower/arduino-pico This link has a very detailed description

Install Arduino IDE and install pico resources by adding line "https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json" to Additional Boards Manager URLs in Arduino IDE Files / Preferences.
Via Arduino IDE Tools/Board / Board Manager search for pico and choose Raspberry Pi Pico/RP2040 version 2.0.1 to install it.

# Upload sketch from Arduino IDE:

Uploading Sketches
To upload your first sketch, you will need to hold the BOOTSEL button down while plugging in the Pico to your computer. Then hit the upload button and the sketch should be transferred and start to run.

After the first upload, this should not be necessary as the core has auto-reset support. Select the appropriate serial port shown in the Arduino Tools->Port->Serial Port menu once (this setting will stick and does not need to be touched for multiple uploads). This selection allows the auto-reset tool to identify the proper device to reset. Them hit the upload button and your sketch should upload and run.arduino-pico

In some cases the Pico will encounter a hard hang and its USB port will not respond to the auto-reset request. Should this happen, just follow the initial procedure of holding the BOOTSEL button down while plugging in the Pico to enter the ROM bootloader.

# The following libraries need to be installed

[RadioLib](https://github.com/jgromes/RadioLib)



[TFT_eSPI](https://github.com/Bodmer/TFT_eSPI)

If TFT is used the ESPI library needs to modify the following 7 lines

### C:\Users\86186\Documents\Arduino\libraries\TFT_eSPI

**Setup135_ST7789.h**
```
#define TFT_MOSI            11

#define TFT_SCLK            10

#define TFT_CS              9

#define TFT_DC              8

#define TFT_RST             12

#define TFT_BL              2
```

**User_Setup_Select.h**

 Only ONE line below should be uncommented
 
`#include <User_Setups/Setup135_ST7789.h>`

# You can also use Arduino_Gfx Library

[Arduino_GFX](https://github.com/moononournation/Arduino_GFX)

# Open Source / Contributors

jgromes (SX127X，ArduinoCore-mbed)

jgromes (SX126X，ArduinoCore-mbed)

jgromes (LLCC68(Use sx126x code)，ArduinoCore-mbed)

jgromes (SX1280，ArduinoCore-mbed)

And many many others who haven't been mentioned....

# Community

We have both a Discord Server 
https://discord.gg/qMDNZbX9rE


# Contact 01Space
facebook:Jiale Xu

twitter:yongxiangxu251

E-mail：759315223@qq.com
