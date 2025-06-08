/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2023 Raspberry Pi (Trading) Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef BOARD_STEP_PROBE_H_
#define BOARD_STEP_PROBE_H_

#define PROBE_IO_SWDI
// #define PROBE_IO_RAW
#define PROBE_CDC_UART
// #define PROBE_PIN_RESET 22

// PIO config
#define PROBE_SM 0

#ifdef PROBE_IO_SWDI
#define PROBE_PIN_OFFSET 24
// pio需要offset开始的两个io为输出
#define PROBE_PIN_SWDI (PROBE_PIN_OFFSET - 1)
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 0)
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 1)
#endif

#ifdef PROBE_IO_RAW
#define PROBE_PIN_OFFSET 24
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 1)
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 0)
#endif

// UART config
#define PROBE_UART_TX 20
#define PROBE_UART_RX 21
#define PROBE_UART_INTERFACE uart1
#define PROBE_UART_BAUDRATE 115200

#define PROBE_USB_CONNECTED_LED 26
#define PROBE_DAP_CONNECTED_LED 27
#define PROBE_DAP_RUNNING_LED 28

#define PROBE_PRODUCT_STRING "Step Probe (CMSIS-DAP)"

#endif
