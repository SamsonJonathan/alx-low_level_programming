#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;/* Initialize the node count to zero */

	while (h)
	{
		printf("%d\n", h->n);/* Print the current element's data */
		h = h->next;/* move to the next node */
		num++;/* Increment the number */
	}

	return (num);/* Return the number of nodes */

}
