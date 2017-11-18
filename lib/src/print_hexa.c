/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** print_hexa.c
*/

#include <stdarg.h>
#include "my.h"

void do_hexa(va_list ap)
{
	convert_hexa(0, va_arg(ap, int));
}

void do_hexa_caps(va_list ap)
{
	convert_hexa(1, va_arg(ap, int));
}
