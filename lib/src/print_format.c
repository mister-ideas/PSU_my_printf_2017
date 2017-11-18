/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** print_format.c
*/

#include <stdarg.h>
#include "my.h"

void do_hexa_format(va_list ap)
{
	my_putstr("0x");
	my_put_nbr(va_arg(ap, int));
}

void do_hexa_format_caps(va_list ap)
{
	my_putstr("0X");
	my_put_nbr(va_arg(ap, int));
}

void do_octal_format(va_list ap)
{
	convert_octal(1, va_arg(ap, int));
}
