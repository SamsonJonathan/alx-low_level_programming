#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;/* Move to the next node */
		num++;/* increment the node count */
	}
	return (num);/* Return the number of nodes */
}
