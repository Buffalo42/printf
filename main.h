#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);

void print_bin(va_list nc);
void print_int(va_list nc);

#endif
