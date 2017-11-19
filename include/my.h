/*
** EPITECH PROJECT, 2017
** Bistro-matic
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

typedef void (*pf)(va_list ap);

void my_putchar(char c);
void convert_hexa(int mode, int nb);
void convert_octal(int mode, int nb);
void convert_bin(int nb);
void replace_non_printables(char *str);
void do_int(va_list ap);
void do_uint(va_list ap);
void do_bin(va_list ap);
void do_hexa(va_list ap);
void do_hexa_caps(va_list ap);
void do_octal(va_list ap);
void do_char(va_list ap);
void do_string(va_list ap);
void do_non_printables(va_list ap);
void do_mod();
void do_pointer(va_list ap);
void do_hexa_format(va_list ap);
void do_hexa_format_caps(va_list ap);
void do_octal_format(va_list ap);
void do_sign_format(va_list ap);

int my_printf(char *str, ...);
int my_putstr(char const *str);
int my_put_nbr(int nb);

#endif
