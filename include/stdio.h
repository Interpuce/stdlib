#pragma once

#include <stdint.h>
#include <string.h>
#include <sys/syscall.h>

uint8_t current_color = 0x07;

void print(const char *str) {
    _print(str, current_color);
}

void set_color(uint8_t color) {
    _print("", color);
    current_color = color;
}