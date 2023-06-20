#include <unistd.h>

/**
  * _putchar - writes c to stdout
  * @c: The character for print
  * Return: 1 (Success)
  */

int _putchar(char c)

{

	return (write(1, &c, 1));

}
