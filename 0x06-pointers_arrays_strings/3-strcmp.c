#include "main.h"

/**
  * _strcmp - Compares pointers to two strings
  * @s1: First string pointer to be compared
  * @s2: Second string pointer to be compared
  * Return: If str1 < str2, the negative difference of the first unmatched characters
  * If str1 == str2, 0
  * If str1 > str2, the positive differnce of the first unmatched characters
  */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
