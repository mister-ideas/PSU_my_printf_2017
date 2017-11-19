/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
	my_printf("%s", "hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, simple_char, .init = redirect_all_std)
{
	my_printf("%c", 'c');
	cr_assert_stdout_eq_str("c");
}

Test(my_printf, simple_int2, .init = redirect_all_std)
{
	my_printf("%d", 236531);
	cr_assert_stdout_eq_str("236531");
}

Test(my_printf, simple_int, .init = redirect_all_std)
{
	my_printf("%i", 236531);
	cr_assert_stdout_eq_str("236531");
}

Test(my_printf, simple_uint, .init = redirect_all_std)
{
	my_printf("%u", 123);
	cr_assert_stdout_eq_str("123");
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

Test(my_printf, simple_octal, .init = redirect_all_std)
{
	my_printf("%o", 1);
	cr_assert_stdout_eq_str("173");
}

Test(my_printf, double_mod, .init = redirect_all_std)
{
	my_printf("%%", "test");
	cr_assert_stdout_eq_str("%");
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
