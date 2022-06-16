# RP2040-1.14LCD

![image](https://github.com/01Space/RP2040-1.14LCD/blob/main/image/RP2040-LORA.jpg)

# General Flashing Instructions:

With ArduinoCore-mbed Release 2.0.0, Arduino now support Raspberry Pi Pico officially. To program Raspberry Pi Pico in Arduino framework, install Arduino Mbed OS RP2040 Boards in Arduino IDE's Library Manager.

![image](https://github.com/01Space/RP2040-0.42LCD/blob/main/image/Arduino%20Mbed%20OS%20RP2040%20Boards.jpg)


https://github.com/earlephilhower/arduino-pico This link has a very detailed description

Install Arduino IDE and install pico resources by adding line "https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json" to Additional Boards Manager URLs in Arduino IDE Files / Preferences.
Via Arduino IDE Tools/Board / Board Manager search for pico and choose Raspberry Pi Pico/RP2040 version 2.0.1 to install it.
# The following Arduino libraries need to be installed（via option tools / Manage Libraries in Arduino IDE）


# Upload sketch from Arduino IDE:

Uploading Sketches
To upload your first sketch, you will need to hold the BOOTSEL button down while plugging in the Pico to your computer. Then hit the upload button and the sketch should be transferred and start to run.

After the first upload, this should not be necessary as the core has auto-reset support. Select the appropriate serial port shown in the Arduino Tools->Port->Serial Port menu once (this setting will stick and does not need to be touched for multiple uploads). This selection allows the auto-reset tool to identify the proper device to reset. Them hit the upload button and your sketch should upload and run.arduino-pico

In some cases the Pico will encounter a hard hang and its USB port will not respond to the auto-reset request. Should this happen, just follow the initial procedure of holding the BOOTSEL button down while plugging in the Pico to enter the ROM bootloader.


# Open Source / Contributors

jgromes (SX127X，ArduinoCore-mbed)

jgromes (SX126X，ArduinoCore-mbed)

jgromes (LLCC68(Use sx126x code)，ArduinoCore-mbed)

jgromes (SX1280，ArduinoCore-mbed)


The following libraries need to be installed

RadioLib

And many many others who haven't been mentioned....



# Contact 01Space
facebook:Jiale Xu

twitter:yongxiangxu251

E-mail：759315223@qq.com
