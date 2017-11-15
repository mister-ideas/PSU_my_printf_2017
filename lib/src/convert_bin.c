/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** convert_bin
*/

#include "my.h"

void convert_bin(int nb)
{
	int result = 0;
	int remainder;
	int i = 1;

	while (nb != 0) {
		remainder = nb % 2;
		nb /= 2;
		result += remainder * i;
		i *= 10;
	}
	my_put_nbr(result);
}
