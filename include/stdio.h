#pragma once

#include <stdint.h>
#include <string.h>

extern void printstr(const char *str, uint8_t color);
void read_str(char *buffer, uint16_t max_length, uint8_t secret, uint8_t color);
uint8_t read_yn(char *text, uint8_t color);

uint8_t current_color = 0x07;

void print(const char *str) {
    printstr(str, current_color);
}

void set_color(uint8_t color) {
    printstr("", color);
    current_color = color;
}