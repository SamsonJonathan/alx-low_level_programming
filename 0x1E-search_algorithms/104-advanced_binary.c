#include "search_algos.h"

/**
 * _print_array - prints an array
 *
 * @array: the array
 * @low: lower bound
 * @high: higher bound
 */
void _print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}

/**
 * _advanced_binary - searches through an array using binary search
 * algorithm but returns the first occurrence
 *
 * @array: pointer to the first element of the array to search
 * @left: the left bound of the array
 * @right: the right bound of the array
 * @value: the value to be searched
 * Return: the first index where the value is located or -1
 */
int _advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL || left > right)
		return (-1);

	_print_array(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		right = mid;
	}
	else if (array[mid] < value)
		left = mid + 1;
	else if (array[mid] > value)
		right = mid;

	return (_advanced_binary(array, left, right, value));
}

/**
 * advanced_binary - searches through an array using binary search
 * algorithm but returns the first occurrence
 *
 * @array: pointer to the first element of the array to search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the first index where the value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (_advanced_binary(array, 0, size - 1, value));
}
