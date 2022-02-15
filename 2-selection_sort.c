#include "sort.h"

/**
 * sort_min - search for the min in a table and place it
 * in the beginning of the array
 * @array: the given array
 * @start: starting point of the table
 * @size: size of the array
 * Return:  1 or 0
 */

size_t sort_min(int *array, size_t start, size_t size)
{
	size_t i = start + 1,x = start, sorted = 1;
	int  min = array[start];

	for (; i < size; i++)
	{
		if (min > array[i])
		{
			min = array[i];
			x = i;
			sorted = 0;
		}
	}
	array[x] = array[start];
	array[start] = min;
	return (sorted);
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t sorted = 0;

	if (size < 2)
		return;

	while (i < size)
	{
		sorted = sort_min(array, i, size);
		if (!sorted)
			print_array(array, size);
		i++;
	}
}
