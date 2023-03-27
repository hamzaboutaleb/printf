#include "main.h"
#include <stdlib.h>
/**
  * print_str - print string
  * @s: string
  * Return: lenght of string
  */
int print_str(char *s)
{
	int i = 0;
	char *ss = "(null)";

	if (s == NULL)
	{
		for (i = 0; ss[i] != '\0'; i++)
		{
			_putchar(ss[i]);
		}
		return (6);
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
