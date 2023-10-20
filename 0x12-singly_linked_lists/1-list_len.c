#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		h = h->next;
		num++;/* increment the counter for each node */
	}
	return (num);
}
