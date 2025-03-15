ESP32-S3-USB-Serial-Monitor-Test

Based on ESP32-S3
Use PIO programming in VS code 
Use the USB port of ESP32-S3 to upload code and monitor the serial port.
In platformIO.ini:
build_flags = -DARDUINO_USB_CDC_ON_BOOT=1 -DCORE_DEBUG_LEVEL=1
