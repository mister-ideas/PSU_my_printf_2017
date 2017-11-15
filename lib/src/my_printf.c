/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

void print_arg(char *str, va_list ap, int i)
{
	switch (str[i + 1]) {
	case 'd':
	case 'i': my_put_nbr(va_arg(ap, int)); break;
	case 'o': convert_octal(va_arg(ap, int)); break;
	case 'x': convert_hexa(0, va_arg(ap, int)); break;
	case 'X': convert_hexa(1, va_arg(ap, int)); break;
	case 'u': my_put_nbr(va_arg(ap, unsigned int)); break;
	case 'c': my_putchar(va_arg(ap, int)); break;
	case 's': my_putstr(va_arg(ap, char*)); break;
	case '%': my_putchar('%'); break;
	case 'S': replace_non_printables(va_arg(ap, char*)); break;
	}
}

int my_printf(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	for (int i = 0; str[i]; i++) {
		if (str[i] == '%') {
			print_arg(str, ap, i);
			i++;
		} else
			my_putchar(str[i]);
	}
	va_end(ap);
	return (0);
}
