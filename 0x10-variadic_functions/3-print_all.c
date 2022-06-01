#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list pr_all;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char argmt[] = "cifs";

	va_start(pr_all, format);
	while (format && format[i])
	{
		j = 0;
		while (argmt[j])
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
			printf("%c", va_arg(pr_all, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(pr_all, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(pr_all, double)), c = 1;
			break;
		case 's':
			str = va_arg(pr_all, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(pr_all);
}
