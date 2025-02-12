#pragma once

#include <stdint.h>

/*
 * Internal function! Use `print` from `<stdio.h>` instead.
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

/*
 * Internal function! Use `beep` from `<stdio.h>` instead.
 */
static inline void _beep(uint32_t frequency, uint32_t duration) {
    asm volatile (
        "movl $5, %%eax"
        "movl %0, %%ebx"
        "movl %1, %%ecx"
        "int $0x80"
        :
        : "r"(frequency), "r"(duration)
        : "%eax", "%ebx", "%ecx"
    );
}

/*
 * Internal function! Use `crash_os` from `<sys/crash.h>` instead.
 */
static inline void _report_os_crash() {
    asm volatile (
        "movl $6, %%eax"
        "movl %0, %%ebx"
        "int $0x80"
        :
        :
        : "%eax", "%ebx"
    );
}