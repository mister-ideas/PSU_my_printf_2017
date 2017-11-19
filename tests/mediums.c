/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** mediums.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(my_printf, simple_octal, .init = redirect_all_std)
{
	my_printf("%o", 1);
	cr_assert_stdout_eq_str("173");
}

Test(my_printf, simple_hexa, .init = redirect_all_std)
{
	my_printf("%x", 123);
	cr_assert_stdout_eq_str("7b");
}

Test(my_printf, caps_hexa, .init = redirect_all_std)
{
	my_printf("%X", 123);
	cr_assert_stdout_eq_str("7B");
}

Test(my_printf, double_mod, .init = redirect_all_std)
{
	my_printf("%%", "test");
	cr_assert_stdout_eq_str("%");
}

Test(my_printf, simple_uint, .init = redirect_all_std)
{
	my_printf("%u", 123);
	cr_assert_stdout_eq_str("123");
}
