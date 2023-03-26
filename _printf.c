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

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), sum++;
			continue;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
			{
				sum += printer(format[i], ptr);
			}
			else
			{
				va_end(ptr);
				return (-1);
			}

		}
		i++;
	}
	va_end(ptr);
	return (sum);
}
