#include "search_algos.h"

/**
 * interpolation_search - searches though an array using interpolation algo
 *
 * @array: pointer to the first element of the array to search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the element otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (array == NULL)
		return (-1);

	while ((array[h] != array[l]))
	{
		pos = (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		pos += l;
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if ((value >= array[l]) && (value <= array[h]))
		{
			if (array[pos] < value)
				l = pos + 1;
			else if (value < array[pos])
				h = pos - 1;
			else
				return (pos);
		}
	}

	if (value == array[l])
		return (l);
	else
		return (-1);
}
