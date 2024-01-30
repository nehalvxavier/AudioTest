// Copyright 2024 Nehal (@Nehal)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define LED_NUM_LOCK_PIN GP6
#define LED_CAPS_LOCK_PIN GP7
#define LED_SCROLL_LOCK_PIN GP8


#ifdef AUDIO_ENABLE
    #define AUDIO_PIN GP17
    #define AUDIO_PWM_DRIVER PWMD0
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
    #define AUDIO_INIT_DELAY
    #define NO_MUSIC_MODE // Save 2000 bytes
#endif