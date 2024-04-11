#include "search_algos.h"

/**
 * jump_list - searches through a linked list using jump algorithm
 *
 * @list: pointer to the head of the list
 * @size: the size of the list
 * @value: the value to be searched
 * Return: pointer to the first occurrence of the node otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t low = 0, step, idx, i;
	listint_t *front = list;

	if (list == NULL)
		return (NULL);

	step = (size_t)sqrt(size);
	idx = step;
	for (i = 0; i < step; i++)
		front = front->next;

	while (idx < size && front != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
		if (front->n == value)
			return (front);
		else if (front->n > value || front->next == NULL)
			break;

		low = idx;
		idx = idx + step < size - 1 ? idx + step : size - 1;
		for (i = 0; i < step; i++)
		{
			if (front->next != NULL)
				front = front->next;
			list = list->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", low, idx);

	do {
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	} while (list != NULL && list->index < size);

	return (NULL);
}
