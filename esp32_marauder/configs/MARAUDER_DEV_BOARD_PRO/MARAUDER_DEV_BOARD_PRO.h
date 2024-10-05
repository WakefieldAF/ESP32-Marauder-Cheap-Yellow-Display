#pragma once

#define MARAUDER_DEV_BOARD_PRO

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
    #define HAS_GPS

    // SD DEFINITIONS
    
    #define USE_SD
    #define SD_CS 4

    //// MEMORY LOWER LIMIT STUFF
    // These values are in bytes
    #define MEM_LOWER_LIM 20000

    //// NEOPIXEL STUFF      
    #define PIN 16

    //// EVIL PORTAL STUFF
    #define MAX_HTML_SIZE 20000

    // GPS STUFF
    #define GPS_SERIAL_INDEX 2
    #define GPS_TX 21
    #define GPS_RX 17
    #define mac_history_len 512

#endif