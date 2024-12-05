#pragma once

#include <string.h>
#include <stdint.h>
#include <stdbool.h>

extern string file_read(string filename);
extern bool file_edit(string filename, string content, string encoding);
extern string file_get_encoding(string filename);
extern bool file_unlink(string filename);