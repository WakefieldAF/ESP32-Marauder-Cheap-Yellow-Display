#pragma once

#define ESP32_LDDB

    //#define FLIPPER_ZERO_HAT
    //#define HAS_BATTERY
    #define HAS_BT
    //#define HAS_BUTTONS
    #define HAS_NEOPIXEL_LED
    //#define HAS_PWR_MGMT
    //#define HAS_SCREEN
    #define HAS_SD
    #define USE_SD
    //#define HAS_TEMP_SENSOR
    //#define HAS_GPS

    // SD DEFINITIONS
    #define SD_CS 4

    //// MEMORY LOWER LIMIT STUFF
    // These values are in bytes
    #define MEM_LOWER_LIM 20000

    // NEOPIXEL STUFF
    #define PIN 17

    //// EVIL PORTAL STUFF
    #define MAX_HTML_SIZE 20000
#endif