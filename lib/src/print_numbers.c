/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** print_numbers.c
*/

#include <stdarg.h>
#include "my.h"

void do_int(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void do_uint(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void do_octal(va_list ap)
{
	convert_octal(0, va_arg(ap, int));
}

void do_bin(va_list ap)
{
	convert_bin(va_arg(ap, int));
}

void do_pointer(va_list ap)
{
	my_putstr("0x");
	convert_hexa(0, va_arg(ap, unsigned long int));
}
