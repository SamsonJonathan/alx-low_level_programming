#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: none (void)
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;/* Move to the next node */
		free(tmp->str);
		free(tmp);/* Free the memory of the saved node */
	}
}
