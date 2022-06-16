# RP2040-1.14LCD

![image](https://github.com/01Space/RP2040-1.14LCD/blob/main/image/RP2040-LORA.jpg)

# There are 6 versions for you to choose from

Without Lora version

With Lora version

With SX1278(410-525MHz，+18dBm)

With SX1262(803-930MHz,+22dBm)

With SX1268(410-525MHz,+22dBm)

With LLCC68(410-525MHz,+22dBm)

With SX1280(Coming soon)

# If you select the sx127x module version, the SD card read / write function will not be supported

# General Flashing Instructions:

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

RadioLib（https://github.com/jgromes/RadioLib）
TFT_eSPI （https://github.com/Bodmer/TFT_eSPI）

# Open Source / Contributors

jgromes (SX127X，ArduinoCore-mbed)

jgromes (SX126X，ArduinoCore-mbed)

jgromes (LLCC68(Use sx126x code)，ArduinoCore-mbed)

jgromes (SX1280，ArduinoCore-mbed)

And many many others who haven't been mentioned....



# Contact 01Space
facebook:Jiale Xu

twitter:yongxiangxu251

E-mail：759315223@qq.com
