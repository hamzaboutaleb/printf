#include <stdlib.h>

/**
 * _convert - Converts an unsigned int to a string.
 * @num: The unsigned int to be converted.
 * @base: The base of the number (e.g. 2 for binary, 10 for decimal, etc.).
 *
 * Return: A pointer to the converted string.
 */
char *_convert(unsigned int num, unsigned int base)
{
	char *str;
	unsigned int tmp = num;
	int digits = 0;

	while (tmp > 0)
	{
		tmp = tmp / base;
		digits++;
	}

	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[digits] = '\0';
	digits--;
	while (digits >= 0)
	{
		str[digits] = "0123456789abcdef"[num % base];
		num = num / base;
		digits--;
	}

	return (str);
}
