#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
int print_rev(char *str);
int print_unint(unsigned int num, int *num_count);
int print_heX(unsigned int num, int *num_count);
int print_oct(unsigned int num, int *num_count);
int print_hex(unsigned int num, int *num_count);
int print_bi(unsigned int num, int *num_count);
int print_num(long int num);

#endif
