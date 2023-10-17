#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _printf(const char *format, ...);
void print_bin(va_list nc, int *nc_count);
void to_binary(unsigned int nc_num);
void print_unknown(int *nc_count, const char *format);
void print_percent(int *nc_count);
void print_string(va_list  nc, int *nc_count);
void print_char(va_list nc, int *nc_count);
void print_int(va_list nc, int *nc_count);

#endif
