# ESPs
This library provides the analogWrite() function of AVR boards to ESP boards as espAnalogWrite().

Steps for library installation in ArduinoIDE:
1. Download the zip library and open it
2. Close the arduino IDE if opened
3. Navigate to the ArduinoIDE directroy
4. Move the 'ESPs' directory into the arduino IDE libraries folder
5. Open arduino IDE
6. Go to Sketch>Include Library
7. Scroll down and under 'User Contributed', you should see 'ESPs'.
8. Click to add it to your sketch
9. Once added, you should also get the included example in 'File>Examples>Scroll Down to find ESPs

Steps for library installation in PlatformIO:
1. Download the zip library and open it
2. If you want the object version of the library, move the 'ESPs' in the ArduinoIDE directory to the libraries folder of your PIO poject
3. If not, navigate to the PlatformIO directroy
4. Move the 'ESPs' directory into the libraries folder of your PIO project
5. In your code, insert '#include <ESPs.h>' after the '#include <Arduino.h>' line
6. The library can now be used in your code

Commands availble:
1. obj.espSetup(int gpio pin, int channel, int resolution(default is 8), int frequency in Hz(default is 1 KHz)
    This function sets up the internal timers on the ESP board. See examples directory for an example
2. obj.espAnalogWrite(int channel, int duty)
    This matches the AVR analogWrite() function, but this is more powerful.
3  obj.espAnalogWrite_DimLED(int channel, int delay(default is 10 ms);
    This function dims an LED connected to the GPIO pin specified above. The delay is for the time in between each duty value. 

Note: In PIO, you have an option to use the functions by themselves or as methods. But in ArduinoIDE, you have to use them as methods.
