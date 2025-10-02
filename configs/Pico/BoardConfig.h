/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "my controller"

// Main pin mapping Configuration
//                          // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |


// Setting GPIO pins to assigned by add-on
//
#define GPIO_PIN_00 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_01 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_6 GpioAction::ASSIGNED_TO_ADDON
#define GPIO_PIN_7 GpioAction::ASSIGNED_TO_ADDON


#define USB_PERIPHERAL_ENABLED 1

#define USB_PERIPHERAL_PIN_DPLUS 6
#define USB_PERIPHERAL_PIN_ORDER 0

#define DEFAULT_INPUT_MODE_R1 INPUT_MODE_XBONE
#define DEFAULT_INPUT_MODE_B4 INPUT_MODE_PS5
#define DEFAULT_PS5AUTHENTICATION_TYPE INPUT_MODE_AUTH_TYPE_USB




#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 0
#define I2C0_PIN_SCL 1

#define DEFAULT_BOARD_LAYOUT_A {\
    {GP_ELEMENT_PIN_BUTTON, {93,  11, 4, 4, 1, 1, 2,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {113,  11, 4, 4, 1, 1, 3,    GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {103,  21, 4, 4, 1, 1, 4,    GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {93,  31, 4, 4, 1, 1, 5,    GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {93,  45, 4, 4, 1, 1, 14,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {82,  56, 4, 5, 1, 1, 15,    GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {65,  55, 4, 4, 1, 1, 16,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {54,  34, 2, 2, 1, 1, 18,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {41,  25, 2, 2, 1, 1, 19,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {26,  24, 2, 2, 1, 1, 20,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {11,  29, 2, 2, 1, 1, 21,   GP_SHAPE_ELLIPSE}},\
    {GP_ELEMENT_PIN_BUTTON, {67, 8, 2, 2, 1, 1, 22,   GP_SHAPE_ELLIPSE}}\
    {GP_ELEMENT_PIN_BUTTON, {50, 8, 2, 2, 1, 1, 26,   GP_SHAPE_ELLIPSE}}\
    {GP_ELEMENT_PIN_BUTTON, {33, 8, 2, 2, 1, 1, 27,   GP_SHAPE_ELLIPSE}}\
    {GP_ELEMENT_PIN_BUTTON, {16, 8, 2, 2, 1, 1, 28,   GP_SHAPE_ELLIPSE}}\
}


#endif
