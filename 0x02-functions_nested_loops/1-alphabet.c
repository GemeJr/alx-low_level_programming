#include "main.h"

/**
 *print_alphabet - function to print alphabet
 *
 *Return: no return
 *
 */
int _putchar(char c);
void print_alphabet(void)
{
char a = 'a';
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar ('\n');
}
