/*
** EPITECH PROJECT, 2017
** convert_octal
** File description:
** convert_octal.c
*/

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
