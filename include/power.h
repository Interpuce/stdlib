#pragma once

/**
 * This file was added by FixingAuror, when he has not any access
 * to the closed-source AurorOS repository and it will require
 * `shutdown` and `restart` functions.
*/

#include <stdint.h>
#include <stdbool.h>

extern void shutdown(void);
extern void restart(void);

// Alternative function to do power action by code
bool do_power_action(int8 action) {
    if (action == 1) {
        shutdown();
        return true;
    }
    if (action == 2) {
        shutdown();
        return true;
    }
    return false; // Operation not recognised
}
