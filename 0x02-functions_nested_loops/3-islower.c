#include "main.h"
#include <ctype.h> 

int _islower(int c);

int _islower(int c)
{
  if (c >= 97 && c <= 123)
{
  return (1);
  }else
    return (0);
}
