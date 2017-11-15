/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int my_printf(char *str, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, str);
	for (i = 0; str[i]; i++) {
		if (str[i] == '%') {
			switch (str[i + 1]) {
			case 's': my_putstr(va_arg(ap, char*)); break;
			case 'd':
			case 'i': my_put_nbr(va_arg(ap, int)); break;
			case 'c': my_putchar(va_arg(ap, int)); break;
			case '%': my_putchar('%'); break;
			case 'o': convert_octal(va_arg(ap, int)); break;
			case 'x': convert_hexa(0, va_arg(ap, int)); break;
			case 'X': convert_hexa(1, va_arg(ap, int)); break;
			case 'u': my_put_nbr(va_arg(ap, unsigned int)); break;
			}
			i++;
		} else
			my_putchar(str[i]);
	}
	va_end(ap);
	return (0);
}
