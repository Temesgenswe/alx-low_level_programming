#include "main.h"


/**
 * _print_rev_recursion -
 * @s: string
 *
 * Return: On success 1.
 * On error, 
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
