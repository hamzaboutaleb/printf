#include "main.h"
/**
 * _tostring - converts an integer to a string
 * @n: the integer to convert
 * @s: a buffer to store the resulting string
 * Return: a pointer to the resulting string
 */
char *_tostring(int n, char *s)
{
	int i = 0, sign = n < 0 ? -1 : 1;
	int j = 0;
	char tmp;

	if (n == 0)
	{
		s[i] = '0';
		i++;
	}
	else
	{
		while (n != 0)
		{
			s[i] = '0' + (n % 10) * sign;
			n /= 10;
			i++;
		}
		if (sign < 0)
		{
			s[i] = '-';
			i++;
		}
	}
	s[i] = '\0';

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
	return (s);
}
