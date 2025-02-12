#pragma once

#include <stdint.h>

/**
 * **Internal function!** Use 
 */
static inline void _print(const char* str, uint8_t color) {
    asm volatile (
        "movl $4, %%eax"
        "movl %0, %%ebx"
        "movl %1, %%ecx"
        "movl %2, %%edx"
        "int $0x80"
        :
        : "r"(1), "r"(str), "r"(color)
        : "%eax", "%ebx", "%ecx", "%edx"
    );
}