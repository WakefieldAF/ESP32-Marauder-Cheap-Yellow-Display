#pragma once

#define USE_FLIPPER_SD
#define MARAUDER_FLIPPER

    //#define FLIPPER_ZERO_HAT
    //#define HAS_BATTERY
    //#define HAS_BT
    //#define HAS_BUTTONS
    //#define HAS_NEOPIXEL_LED
    //#define HAS_PWR_MGMT
    //#define HAS_SCREEN
    #define HAS_GPS
      #define HAS_SD
      #define USE_SD
    //#define HAS_TEMP_SENSOR

    // SD DEFINITIONS

    #define USE_SD
    #define SD_CS 10

    //// MEMORY LOWER LIMIT STUFF
    // These values are in bytes
    #define MEM_LOWER_LIM 20000

    //// EVIL PORTAL STUFF
    #define MAX_HTML_SIZE 20000

    // GPS STUFF
      #ifdef WRITE_PACKETS_SERIAL
        #define GPS_SOFTWARE_SERIAL
      #else
        #define GPS_SERIAL_INDEX 1
      #endif
      #define GPS_TX 9
      #define GPS_RX 21
      #define mac_history_len 512

#endif