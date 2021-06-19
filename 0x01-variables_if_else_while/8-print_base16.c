#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str;
str = 'a';
int num;
 for (num = 0; num < 10; num++)
{
putchar (num % 10 + '0');
}
while (str <= 'f')
{
putchar(str);
str++;
}
putchar('\n');
return (0);
}
