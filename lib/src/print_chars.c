/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** print_chars.c
*/

#include <stdarg.h>
#include "my.h"

void do_char(va_list ap)
{
	my_putchar(va_arg(ap, int));
}

void do_string(va_list ap)
{
	my_putstr(va_arg(ap, char*));
}

void do_non_printables(va_list ap)
{
	replace_non_printables(va_arg(ap, char*));
}

void do_mod(va_list ap)
{
	my_putchar('%');
}
