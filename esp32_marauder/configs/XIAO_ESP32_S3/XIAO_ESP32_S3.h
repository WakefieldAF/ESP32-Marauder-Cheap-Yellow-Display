#pragma once

#define XIAO_ESP32_S3

    #define FLIPPER_ZERO_HAT
    //#define HAS_BATTERY
    #define HAS_BT
    //#define HAS_BUTTONS
    //#define HAS_NEOPIXEL_LED
    //#define HAS_PWR_MGMT
    //#define HAS_SCREEN
    //#define HAS_SD
    //#define HAS_TEMP_SENSOR
    //#define HAS_GPS
    //// END BOARD FEATURES

    #define USE_FLIPPER_SD

    // SD DEFINITIONS
    #define USE_SD
    #define SD_CS 3

    //// MEMORY LOWER LIMIT STUFF
    // These values are in bytes
    #define MEM_LOWER_LIM 20000
    //// END MEMORY LOWER LIMIT STUFF

    //// BOARD PIN OVERRIDES
    #define XIAO_RX1 1
    #define XIAO_TX1 2
    //// END BOARD PIN OVERRIDES

    //// EVIL PORTAL STUFF
    #define MAX_HTML_SIZE 20000
    //// END EVIL PORTAL STUFF

#endif