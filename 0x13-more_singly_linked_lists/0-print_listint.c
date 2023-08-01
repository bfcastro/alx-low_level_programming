#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_listint - prints
  * @h: linked list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
