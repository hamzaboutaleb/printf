#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("%s.\n", "sentence");
    len2 = printf("%s.\n", "sentence");
    printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
