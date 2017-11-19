/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** tests3.c
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
