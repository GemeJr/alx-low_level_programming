#include "main.h"

/**
 *print_alphabet_x10 - function to print alphabet 10 times
 *
 *Return: no return
 *
 */
void print_alphabet_x10(void)
{
char a = 'a';
int i;
for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar ('\n');
}
}
