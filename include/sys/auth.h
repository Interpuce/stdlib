#pragma once

#include <sys/syscall.h>

/**
 * These functions are just wrappers to assembly syscalls (contained in `<sys/syscall.h>`).
 * If you are looking for syscalls implementation, please see the another file.
 */

string get_pc_name() {
    return _pc_name_get();
}

string get_auror_name() {
    return _auror_name_get();
}

string get_auror_version() {
    return _auror_ver_get();
}