#include "main.h"
/**
 *_puts_recursion - function to recursively print all strings using putchar
 * just admit 1 character
 *
 * @s: pointer to the string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar ('\n');
	}
}
