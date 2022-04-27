#include "main.h"
/*
* this is function for recursion
*/
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_puts_recursion("Puts with recursion");
	_putchar(*s);
	_puts_recursion(s + 1);
}
