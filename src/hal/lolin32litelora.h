// clang-format off
// upload_speed 921600
// board lolin32

#ifndef _LOLINLITELORA_H
#define _LOLINLITELORA_H

#include <stdint.h>

// Hardware related definitions for lolin32 lite with loraNode32 shield
// See https://github.com/hallard/LoLin32-Lite-Lora

// disable brownout detection (avoid unexpected reset on some boards)
#define DISABLE_BROWNOUT 1 // comment out if you want to keep brownout feature

#define HAS_DISPLAY 1 // OLED-Display on board
//#define MY_DISPLAY_FLIP  1 // uncomment this for rotated display
#define HAS_LED       22  // ESP32 GPIO12 (pin22) On Board LED (set to NOT_A_PIN to disable)
#define LED_ACTIVE_LOW 1  // Onboard LED is active when pin is LOW
#define HAS_RGB_LED SmartLed rgb_led(LED_WS2812, 1, GPIO_NUM_13) // ESP32 GPIO13 (pin13) On Board Shield WS2812B RGB LED
#define HAS_BUTTON    15  // ESP32 GPIO15 (pin15) Button is on the LoraNode32 shield
#define BUTTON_PULLUP  1  // Button need pullup instead of default pulldown

#define HAS_LORA  1       // comment out if device shall not send data via LoRa
#define CFG_sx1276_radio 1 // RFM95 module

// Pins for LORA chip SPI interface, reset line and interrupt lines
#define LORA_SCK  SCK 
#define LORA_CS   SS
#define LORA_MISO MISO
#define LORA_MOSI MOSI
#define LORA_RST  (25)
#define LORA_IRQ  (27)
#define LORA_IO1  (26)
#define LORA_IO2  (4)

// Pins for I2C interface of OLED Display
#define MY_DISPLAY_SDA (12)
#define MY_DISPLAY_SCL (14)
#define MY_DISPLAY_RST NOT_A_PIN

// I2C config for Microchip 24AA02E64 DEVEUI unique address
#define MCP_24AA02E64_I2C_ADDRESS 0x50 // I2C address for the 24AA02E64 
#define MCP_24AA02E64_MAC_ADDRESS 0xF8 // Memory adress of unique deveui 64 bits

#endif
