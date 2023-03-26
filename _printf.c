#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
  * _printf - printf function
  * @format: tring format
  * Return: length of string
  */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, sum = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			sum++, i++;
		}
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case '%':
					_putchar('%'), sum++;
				break;
				case 'c':
					_putchar(va_arg(ptr, int)), sum++;
				break;
				case 's':
					sum += print_str(va_arg(ptr, char *));
				break;
				case '\0':
					return (-1);
				break;
				case ' ':
					if (!format[i + 1])
						return (-1);
				break;
			}
			i++;
		}
	}

	va_end(ptr);
	return (sum);
}
