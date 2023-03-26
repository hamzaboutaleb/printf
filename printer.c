#include <stdarg.h>
#include "main.h"

int printer(char c, va_list ptr)
{
    int sum = 0;
    switch (c)
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
		default:
			_putchar('%'), _putchar(c), sum += 2;
		break;
	}
    return sum;
}
