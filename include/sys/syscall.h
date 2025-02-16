#pragma once

#include <stdint.h>
#include <string.h>

/*
 * Internal function! Use `print` from `<stdio.h>` instead.
 */
static inline void _print(const char* str, uint32_t color) {
    asm volatile (
        "movl $4, %%eax\n"
        "movl %0, %%ecx\n"
        "movl %1, %%edx\n"
        "int $0x80\n"
        :
        : "r"(str), "r"(color)
        : "%eax", "%ecx", "%edx"
    );
}

/*
 * Internal function! Use `beep` from `<stdio.h>` instead.
 */
static inline void _beep(uint32_t frequency, uint32_t duration) {
    asm volatile (
        "movl $5, %%eax\n"
        "movl %0, %%ebx\n"
        "movl %1, %%ecx\n"
        "int $0x80\n"
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
        "movl $6, %%eax\n"
        "int $0x80\n"
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
        "movl $7, %%eax\n"
        "int $0x80\n"
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
        "movl $8, %%eax\n"
        "int $0x80\n"
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
        "movl $9, %%eax\n"
        "int $0x80\n"
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
        "movl $10, %%eax\n"
        "movl %0, %%ebx\n"
        "movl %1, %%ecx\n"
        "int $0x80\n"
        :
        : "r"(buffer), "r"(length)
        : "%eax", "%ebx", "%ecx"
    );
}

/*
 * Internal function! Use `printct` from `<stdio.h>` instead.
 */
static inline void _printct(const char* str, uint32_t color) {
    asm volatile (
        "movl $11, %%eax\n"
        "movl %0, %%ebx\n"
        "movl %1, %%ecx\n"
        "int $0x80\n"
        :
        : "r"(str), "r"(color)
        : "%eax", "%ebx", "%ecx"
    );
}