#ifndef BLE_GAMEPAD_PLATFORM_H
#define BLE_GAMEPAD_PLATFORM_H

// Include ESP32 Headers
#if defined(ARDUINO_ARCH_ESP32)
#include "sdkconfig.h"
#endif

// Include NRF5 Headers
#if defined(ARDUINO_ARCH_NRF5)

#endif

#if (defined(ARDUINO_ARCH_ESP32) && defined(CONFIG_BT_ENABLED)) || defined(ARDUINO_ARCH_NRF5)

#include "nimconfig.h"

#endif // (defined(ARDUINO_ARCH_ESP32) && defined(CONFIG_BT_ENABLED)) || defined(ARDUINO_ARCH_NRF5)

#endif // BLE_GAMEPAD_PLATFORM_H