#include "variadic_function.h"

/**
 * prints_all - prints anything
 * @format: a list of types or arguments passed to the function
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		whie (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
				case

