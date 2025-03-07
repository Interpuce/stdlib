#pragma once

#include <stdint.h>
#include <string.h>

/*
 * Internal function! Use `print` from `<stdio.h>` instead.
 */
static inline void _print(const char* str, uint32_t color);

/*
 * Internal function! Use `beep` from `<stdio.h>` instead.
 */
static inline void _beep(uint32_t frequency, uint32_t duration);

/*
 * Internal function! Use `crash_os` from `<sys/crash.h>` instead.
 */
static inline void _report_os_crash();

/*
 * Internal function! Use `shutdown` from `<sys/power.h>` instead.
 */
static inline void _shutdown();

/*
 * Internal function! Use `reboot` from `<sys/power.h>` instead.
 */
static inline void _reboot();

/*
 * Internal function! Use `clear_screen` from `<sys/display.h>` instead.
 */
static inline void _clear_screen();

/*
 * Internal function! Use `read` from `<stdio.h>` instead.
 */
static inline void _read_str(char* buffer, uint32_t length);

/*
 * Internal function! Use `printct` from `<stdio.h>` instead.
 */
static inline void _printct(const char* str, uint32_t color);