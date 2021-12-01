#include "main.h"
#include <ctype.h>

/**
 *_islower- checks for a lowercase character.
 *@c: character to be checked
 *Return: Returns 1 if c is lowercase Returns 0 otherwise
 *
 */

int _islower(int c);
int _islower(int c)
{
if (c >= 97 && c <= 123)
{
return (1);
}
else
return (0);
}
