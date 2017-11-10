/*
** EPITECH PROJECT, 2017
** Day04
** File description:
** Task02
*/

#include "my.h"

int my_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') {
		my_putchar(str[i]);
		i += 1;
	}
}
