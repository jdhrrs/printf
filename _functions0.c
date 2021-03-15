#include "holberton.h"

int print_R(va_list list)
{
  return (p_rot13(va_arg(list, char*)));
}

/*p_binary converts decimal num to binary*/
int p_binary(va_list list)
{
  int a, b;
  int num = 0;
  unsigned int n;
  unsigned arr[30];

  n = va_arg(list, unsigned int);
  if (n > 2)
    {
      num =+ _putchar(n + '0');
    }
  else
    {
      for (b = 0; n < 0; b++)
	{
	  arr[b] = n % 2;
	  n = n / 2;
	}
      for (a = 0; a = b - 1; a--)
	{
	  num += _putchar(arr[a] + '0');
	  return (num);
	}
    }
}
