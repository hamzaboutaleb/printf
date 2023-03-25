#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
  * _printf - printf function
  * @format: tring format
  * Return: length of string
  */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0;
	int sum = 0;
	int leng = strlen(format);

	if (!format)
		return (-1);
	if (leng == 0)
		return (0);

	va_start(ptr, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			switch (format[i])
			{
				case '%':
					_putchar('%');
					sum++;
				break;
				case 'c':
					_putchar(va_arg(ptr, int));
					sum++;
				break;
				case 's':
					sum += print_str(va_arg(ptr, char *));
				break;
				default:
					_putchar('%');
					_putchar(format[i]);
					sum += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}

	va_end(ptr);
	return (sum);
}
