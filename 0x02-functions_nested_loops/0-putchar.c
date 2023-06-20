#include <stdio.h>
/**
  * _putchar - writes the character c to stdout
  * @c: print
  * Return: 0 (Success)
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
