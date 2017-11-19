/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** tests1.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, simple_hexa_format_caps, .init = redirect_all_std)
{
	my_printf("%#X", 9);
	cr_assert_stdout_eq_str("0X9");
}

Test(my_printf, simple_octal_format, .init = redirect_all_std)
{
	my_printf("%#o", 9);
	cr_assert_stdout_eq_str("011");
}

Test(my_printf, simple_unknown_format, .init = redirect_all_std)
{
	my_printf("%#r", 123);
	cr_assert_stdout_eq_str("%#r");
}

Test(my_printf, simple_unknown_specifier, .init = redirect_all_std)
{
	my_printf("%f", 123);
	cr_assert_stdout_eq_str("%f");
}
