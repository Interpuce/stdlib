#pragma once

#include <stdint.h>
#include <string.h>
#include <sys/syscall.h>

/**
 * These functions are just wrappers to assembly syscalls (contained in `<sys/syscall.h>`).
 * If you are looking for syscalls implementation, please see the another file.
 * 
 * Syscall for `print` requires the color argument, which is stored in `current_color`
 * variable. To modify the color passed to the print argument, use `set_color`.
 */

uint8_t current_color = 0x07;

void print(const char *str) {
    _print(str, current_color);
}

void println(const char *str) {
    print(str);
    print("\n");
}

void cprint(const char *str, uint8_t color) {
    _print(str, color);
}

void cprintln(const char *str, uint8_t color) {
    _print(str, color);
    _print("\n", color);
}

void set_color(uint8_t color) {
    _print("", color);
    current_color = color;
}

void beep(uint32_t frequency, uint32_t duration) {
    return _beep(frequency, duration);
}