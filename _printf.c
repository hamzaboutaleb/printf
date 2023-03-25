#include <stdarg.h>
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
	
	if (!format)
		return (-1);

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
				break;
				case 'c':
					_putchar(va_arg(ptr, int));
				break;
				case 's':
					print_str(va_arg(ptr, char *));
				break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(ptr);
	return (i - 1);
}
