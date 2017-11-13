/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

void convert_octal(int nb)
{
	int result = 0;
	int i = 1;

	while (nb != 0) {
		result += (nb % 8) * i;
		nb /= 8;
		i *= 10;
	}
	my_put_nbr(result);
}

void convert_hexa(int mode, int nb)
{
	int remainder;
	int quotient;
	int i = 1;
	int temp;
	char result[16];

	quotient = nb;
	while (quotient != 0) {
		temp = quotient % 16;
		if (temp < 10)
			temp += 48;
		else if (mode == 0)
			temp += 87;
		else if (mode == 1)
			temp += 55;
		result[i++]= temp;
		quotient /= 16;
	}
	for (int j = i - 1; j > 0; j--)
		my_putchar(result[j]);
}

int my_printf(char *str, ...)
{
	int i;
	va_list ap;

	va_start(ap, str);
	for (i = 0; str[i]; i++) {
		if (str[i] == '%') {
			switch (str[i + 1]) {
			case 's' : my_putstr(va_arg(ap, char*)); break;
			case 'd' :
			case 'i' : my_put_nbr(va_arg(ap, int)); break;
			case 'c' : my_putchar(va_arg(ap, int)); break;
			case '%' : my_putchar('%'); break;
			case 'o' : convert_octal(va_arg(ap, int)); break;
			case 'x' : convert_hexa(0, va_arg(ap, int)); break;
			case 'X' : convert_hexa(1, va_arg(ap, int)); break;
			}
			i++;
		} else
			my_putchar(str[i]);
	}
	va_end(ap);
	return (0);
}
