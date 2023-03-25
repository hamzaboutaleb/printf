#include "main.h"

/**
  * print_str - print string
  * @s: string
  */
int print_str(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
