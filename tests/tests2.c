/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** tests2.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
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
