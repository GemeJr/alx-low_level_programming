#include "main.h"
#include <stdio.h>

/**
 *print_last_digit - a function that prints the last digit of a number.
 *@n: integer to be checked
 *
 *Return: returns the value of the last digit
 *
 **/
int print_last_digit(int n);
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
