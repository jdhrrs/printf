#include "holberton.h"

int p_char(va_list list)
{
  /*p_char prints character in list at position in va_arg*/
  _putchar(va_arg(list, int));
  return (1);
}


int p_string(va_list list)
{
  char *a;
  int b;

  a = va_arg(list, char*);
  if (a == NULL)
    {
      a = "(null)";
    }
  for (b = 0; a[b] != '\0'; b++)
    {
      _putchar(a[b]);
    }
  return (b);
}

int p_int(va_list list)
{
  int a, b = 0;
  unsigned int x;

  a = va_arg(list, int);
    if (a < 0)
      {
	_putchar('_');
	b = 1;
	x = a * (-1);
      }
    else
      {
	x = a;
      }
  if (x > 9)
    {
      return (b + count_num(x));
    }
  _putchar(x + '\0');
  return (1 + b);
}

int count_num(unsigned int n)
{
  int count = 0;
  unsigned int x, z;
  if (n != 0)
    {
      z = (n / 10);
      x = (n % 10);
      count += count_num(z);
      count++;
      _putchar(x + '\0');
      return (count);
    }
  return (0);
}

int p_rot13(char *s)
{
  int j, k, count = 0;
  char g[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char h[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  for (j = 0; s[j] != '\0'; j++)
    {
      if (s[j] == g[k])
	{
	  count += _putchar(h[k]);
	  break;
	}
      if (s > 51)
	{
	  count += _putchar(s[j]);
	}
    }
  return (count);
}
