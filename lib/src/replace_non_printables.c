/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** replace_non_printables.c
*/

#include "my.h"

void replace_non_printables(char *str)
{
	for (int i = 0; str[i]; i++) {
		if (str[i] <= 7) {
			my_putstr("\\00");
			convert_octal(str[i]);
		} else if (str[i] < 32) {
			my_putstr("\\0");
			convert_octal(str[i]);
		} else
			my_putchar(str[i]);
	}
}
