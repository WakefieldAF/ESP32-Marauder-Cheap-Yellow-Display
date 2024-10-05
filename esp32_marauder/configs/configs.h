#ifndef configs_h

  #define configs_h

  #define POLISH_POTATO // nice joke average virginian

  //Indicates that it must redirect the stream with the captured packets to serial (1)
  //If not defined, will write packages to SD card if supported
  //#define WRITE_PACKETS_SERIAL
  
  //// BOARD TARGETS
  //#define MARAUDER_M5STICKC
  //#define MARAUDER_MINI
  #define MARAUDER_V4
  //#define MARAUDER_V6
  //#define MARAUDER_V6_1
  //#define MARAUDER_KIT
  //#define GENERIC_ESP32
  //#define MARAUDER_FLIPPER
  //#define ESP32_LDDB
  //#define MARAUDER_DEV_BOARD_PRO
  //#define XIAO_ESP32_S3
  //// END BOARD TARGETS

  #define MARAUDER_VERSION "v1.0.0"

  //// HARDWARE NAMES
  #ifdef MARAUDER_M5STICKC
    #define HARDWARE_NAME "M5Stick-C Plus"
  #elif defined(MARAUDER_MINI)
    #define HARDWARE_NAME "Marauder Mini"
  #elif defined(MARAUDER_V4)
    #define HARDWARE_NAME "Marauder v4"
  #elif defined(MARAUDER_V6)
    #define HARDWARE_NAME "Marauder v6"
  #elif defined(MARAUDER_V6_1)
    #define HARDWARE_NAME "Marauder v6.1"
  #elif defined(MARAUDER_KIT)
    #define HARDWARE_NAME "Marauder Kit"
  #elif defined(MARAUDER_FLIPPER)
    #define HARDWARE_NAME "Flipper Zero Dev Board"
  #elif defined(ESP32_LDDB)
    #define HARDWARE_NAME "ESP32 LDDB"
  #elif defined(MARAUDER_DEV_BOARD_PRO)
    #define HARDWARE_NAME "Flipper Zero Dev Board Pro"
  #elif defined(XIAO_ESP32_S3)
    #define HARDWARE_NAME "XIAO ESP32 S3"
  #else
    #define HARDWARE_NAME "ESP32"
  #endif

  //// END HARDWARE NAMES

  //// SD DEFINITIONS
  #ifdef FLIPPER_ZERO_HAT

    #ifdef USE_FLIPPER_SD
      #define WRITE_PACKETS_SERIAL
    #endif

  //// SCREEN STUFF
  #ifndef HAS_SCREEN

    #define TFT_WHITE 0
    #define TFT_CYAN 0
    #define TFT_BLUE 0
    #define TFT_RED 0
    #define TFT_GREEN 0
    #define TFT_GREY 0
    #define TFT_GRAY 0
    #define TFT_MAGENTA 0
    #define TFT_VIOLET 0
    #define TFT_ORANGE 0
    #define TFT_YELLOW 0
    #define STANDARD_FONT_CHAR_LIMIT 40
    #define FLASH_BUTTON -1

    #include <FS.h>
    #include <functional>
    #include <LinkedList.h>
    #include "SPIFFS.h"
    #include "Assets.h"

  #endif
  //// END SCREEN STUFF

  //// MARAUDER TITLE STUFF
  #else
    #define MARAUDER_TITLE_BYTES 13578
  #endif
  //// END MARAUDER TITLE STUFF

#endif
