#pragma once

  // Board Targets //
  #define MARAUDER_V4
  // Board Targets //

    //#define FLIPPER_ZERO_HAT
    //#define HAS_BATTERY
    #define HAS_BT
    //#define HAS_BUTTONS
    //#define HAS_NEOPIXEL_LED
    #define HAS_PWR_MGMT
    #define HAS_SCREEN
    #define HAS_SD
    #define USE_SD
    //#define HAS_TEMP_SENSOR
    #define HAS_GPS

    #define SCREEN_CHAR_WIDTH 40
    #define HAS_ILI9341
    #define BANNER_TEXT_SIZE 2

    #define TFT_WIDTH 240
    #define TFT_HEIGHT 320
    #define TFT_SHIELD
    
    #define SCREEN_WIDTH TFT_WIDTH
    #define SCREEN_HEIGHT TFT_HEIGHT
    #define HEIGHT_1 TFT_WIDTH
    #define WIDTH_1 TFT_HEIGHT
    #define STANDARD_FONT_CHAR_LIMIT (TFT_WIDTH/6) // number of characters on a single line with normal font
    #define TEXT_HEIGHT 16 // Height of text to be printed and scrolled
    #define BOT_FIXED_AREA 0 // Number of lines in bottom fixed area (lines counted from bottom of screen)
    #define TOP_FIXED_AREA 48 // Number of lines in top fixed area (lines counted from top of screen)
    #define YMAX 320 // Bottom of screen area
    #define minimum(a,b)     (((a) < (b)) ? (a) : (b))
    //#define MENU_FONT NULL
    #define MENU_FONT &FreeMono9pt7b // Winner
    //#define MENU_FONT &FreeMonoBold9pt7b
    //#define MENU_FONT &FreeSans9pt7b
    //#define MENU_FONT &FreeSansBold9pt7b
    #define BUTTON_SCREEN_LIMIT 12
    #define BUTTON_ARRAY_LEN 12
    #define STATUS_BAR_WIDTH 16
    #define LVGL_TICK_PERIOD 6
    
    #define FRAME_X 100
    #define FRAME_Y 64
    #define FRAME_W 120
    #define FRAME_H 50
    
    // Red zone size
    #define REDBUTTON_X FRAME_X
    #define REDBUTTON_Y FRAME_Y
    #define REDBUTTON_W (FRAME_W/2)
    #define REDBUTTON_H FRAME_H
    
    // Green zone size
    #define GREENBUTTON_X (REDBUTTON_X + REDBUTTON_W)
    #define GREENBUTTON_Y FRAME_Y
    #define GREENBUTTON_W (FRAME_W/2)
    #define GREENBUTTON_H FRAME_H
    
    #define STATUSBAR_COLOR 0x4A49
    
    #define KIT_LED_BUILTIN 4
    
  //// MENU DEFINITIONS
    #define BANNER_TIME 100
    
    #define COMMAND_PREFIX "!"
    
    // Keypad start position, key sizes and spacing
    #define KEY_X 120 // Centre of key
    #define KEY_Y 50
    #define KEY_W 240 // Width and height
    #define KEY_H 22
    #define KEY_SPACING_X 0 // X and Y gap
    #define KEY_SPACING_Y 1
    #define KEY_TEXTSIZE 1   // Font size multiplier
    #define ICON_W 22
    #define ICON_H 22
    #define BUTTON_PADDING 22
    //#define BUTTON_ARRAY_LEN 5

  //// SD DEFINITIONS
  #define USE_SD

//    #ifdef MARAUDER_V4
      #define SD_CS 5
  //// END SD DEFINITIONS

  //// MEMORY LOWER LIMIT STUFF
  // These values are in bytes

  //// MEMORY LOWER LIMIT STUFF
  // These values are in bytes
  #define MEM_LOWER_LIM 20000

  //// EVIL PORTAL STUFF
    #define MAX_HTML_SIZE 11400

// GPS Stuff
      #define GPS_SERIAL_INDEX 2
      #define GPS_TX 1
      #define GPS_RX 3
      #define mac_history_len 512

  //// MARAUDER TITLE STUFF
    #define MARAUDER_TITLE_BYTES 13578
#endif