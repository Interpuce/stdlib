#pragma once

#include <stdint.h>
#include <string.h>

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

/*
 * Internal function! Use `get_pc_name` from `<sys/auth.h>` instead.
 */
string _pc_name_get() {
    return "auror";
}

/**
 * Internal function! Use `get_auror_name` from `<sys/auth.h>` instead.
 */
string _auror_name_get() {
    return "AurorOS";
}

/**
 * Internal function! Use `get_auror_version` from `<sys/auth.h>` instead.
 */
string _auror_ver_get() {
    return "Public Beta 3";
}

/*
 * Internal function! Use `shutdown` from `<sys/power.h>` instead.
 */
static inline void _shutdown() {
    asm volatile (
        "movl $7, %%eax"
        "int $0x80"
        :
        :
        : "%eax"
    );
}

/*
 * Internal function! Use `reboot` from `<sys/power.h>` instead.
 */
static inline void _reboot() {
    asm volatile (
        "movl $8, %%eax"
        "int $0x80"
        :
        :
        : "%eax"
    );
}

/*
 * Internal function! Use `clear_screen` from `<sys/display.h>` instead.
 */
static inline void _clear_screen() {
    asm volatile (
        "movl $9, %%eax"
        "int $0x80"
        :
        :
        : "%eax"
    );
}

/*
 * Internal function! Use `read` from `<stdio.h>` instead.
 */
static inline void _read_str(char* buffer, uint32_t length) {
    asm volatile (
        "movl $10, %%eax"
        "movl %0, %%ebx"
        "movl %1, %%ecx"
        "int $0x80"
        :
        : "r"(buffer), "r"(length)
        : "%eax", "%ebx", "%ecx"
    );
}