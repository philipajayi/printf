  GNU nano 5.9                                                binary_test.c























#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a;
    a = _printf("%b\n", 0);
    printf("%d\n", a);
    return (0);
}
