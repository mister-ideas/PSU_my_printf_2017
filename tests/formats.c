/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** formats.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(my_printf, simple_hexa_format, .init = redirect_all_std)
{
	my_printf("%#x", 9);
	cr_assert_stdout_eq_str("0x9");
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

Test(my_printf, simple_sign_format, .init = redirect_all_std)
{
	my_printf("%+i", 123);
	cr_assert_stdout_eq_str("+123");
}

Test(my_printf, simple_unknown, .init = redirect_all_std)
{
	my_printf("%f", 123);
	cr_assert_stdout_eq_str("%f");
}
