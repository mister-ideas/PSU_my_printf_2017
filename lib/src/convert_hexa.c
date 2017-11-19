/*
** EPITECH PROJECT, 2017
** convert_hexa
** File description:
** convert_hexa.c
*/

#include "my.h"

void convert_hexa(int mode, int nb)
{
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
		result[i++] = temp;
		quotient /= 16;
	}
	for (int j = i - 1; j > 0; j--)
		my_putchar(result[j]);
}
