#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _printf(const char *format, ...);
void print_bin(va_list nc);
void to_binary(unsigned int nc_num);
void print_string(va_list  nc);
void print_char(va_list nc);
void print_int(va_list nc);

#endif
