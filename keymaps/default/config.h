// Copyright 2023 gamerolyz (@gamerolyzdiydynamics)

#pragma once

//#define EE_HANDS // Use EEPROM for defining handedness 
#define MASTER_LEFT
#define SERIAL_USART_TX_PIN GP0 // The GPIO pin that is used split communication.

//Pin used for LED
#define WS2812_DI_PIN GP15 //pin used for backlight
#define RGBLED_NUM 36 //number of led used for backlight
#define RGB_DI_PIN GP15 //pin used for backlight
#define NOP_FUDGE false 
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral
//for syncing led properties of two sides of keyboard
#define RGBLIGHT_SPLIT 
#define RGBLED_SPLIT { 18, 18 }

//change number of layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

//Caps lock LED
#define LED_CAPS_LOCK_PIN GP6

#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE