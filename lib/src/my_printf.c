/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

pf pf_specifier[] = {
	['d'] = do_int,
	['i'] = do_int,
	['c'] = do_char,
	['s'] = do_string,
	['S'] = do_non_printables,
	['o'] = do_octal,
	['x'] = do_hexa,
	['X'] = do_hexa_caps,
	['u'] = do_uint,
	['%'] = do_mod,
	['b'] = do_bin
};

int double_percent(char *str, int i)
{
	if (str[i + 1] == ' ' && str[i + 2] == '%') {
		my_putchar('%');
		i += 2;
	} else
		i++;
	return (i);
}

int is_flag(char c)
{
	switch (c) {
	case 'd':
	case 'i':
	case 'c':
	case 's':
	case 'S':
	case 'o':
	case 'x':
	case 'X':
	case 'u':
	case '%':
	case 'b':
		return (1);
	default:
		return (0);
	}
}

int check_case(va_list ap, char *str, int i)
{
	char c = str[i + 2];

	if (str[i] == '%' && str[i + 1] == '+' && is_flag(c) == 1) {
		my_putchar('+');
		my_put_nbr(va_arg(ap, int));
		i = double_percent(str, i) + 2;
	} else if (str[i] == '%' && is_flag(str[i + 1]) == 1) {
		pf_specifier[str[i + 1]](ap);
		i = double_percent(str, i);
	} else
		my_putchar(str[i]);
	return (i);
}

int my_printf(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	for (int i = 0; str[i]; i++) {
		i = check_case(ap, str, i);
	}
	va_end(ap);
	return (0);
}
