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
void print(const char *str);
void println(const char *str);
void cprint(const char *str, uint8_t color);
void cprintln(const char *str, uint8_t color);
void set_color(uint8_t color);
void beep(uint32_t frequency, uint32_t duration);
void print_error(const char* str);
void print_info(const char* str);
void print_warn(const char* str);
void print_ok(const char* str);
void print_custom(const char* str, uint8_t color, uint8_t scolor);
void read(char* buffer, uint32_t max_lenght);
void printct(const char *str, uint8_t color);