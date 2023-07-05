#include "main.h"

/**
  * factorial - Claculate the factorial of a num
  * @n: the number to calculate the factorial
  *
  * Return: integer
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n-1));
}
