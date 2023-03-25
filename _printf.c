#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list ptr;
	char *specif = "cs%";
	int i = 0;

	va_start(ptr, format);
	
	while (format && format[i])
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
					_putchar(va_arg(ptr, char));
				break;
				case 's':
					print_str(va_arg(ptr, char *));
				break;
			}
		}

		_putchar(format[i]);
		i++;
	}

	va_end(ptr);
	return (i);
}
