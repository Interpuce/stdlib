#pragma once

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

int strlen(const char *str);
char *strcpy(char *dest, const char *src);
int streql(const char *str1, const char *str2);
int split_str(char *str, char separator, char **result, int max_splits);
char *strrchr(const char *str, int c);
char *strcat(char *dest, const char *src);
bool starts_with(const char *str, const char *prefix);
char* strslice (char *dest, const char *src, size_t n);