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
	if (s == NULL)
	{
		print_str("(null)");
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
