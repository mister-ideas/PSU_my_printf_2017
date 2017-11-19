/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** tests4.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, simple_hexa_format, .init = redirect_all_std)
{
	my_printf("%#x", 9);
	cr_assert_stdout_eq_str("0x9");
}

Test(my_printf, simple_octal, .init = redirect_all_std)
{
	my_printf("%o", 1);
	cr_assert_stdout_eq_str("173");
}
