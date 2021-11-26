#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int print_alphabet(char,char);
int main(void)
{
char x = 'A';
while (x <= 'z')
{
x = tolower(x);
putchar(x);
x++;
}
putchar('\n');
return (0);
}
