#pragma once

#include <sys/syscall.h>

/**
 * These functions are just wrappers to assembly syscalls (contained in `<sys/syscall.h>`).
 * If you are looking for syscalls implementation, please see the another file.
 */

void clearscreen() {
    _clear_screen();
}