#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1
 * if value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right, i;

	if (array == NULL)
		return (-1);
	right = size - 1;
	left = 0;
	mid = left + (right - left) / 2;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
		mid = left + (right - left) / 2;
	}

	return (-1);
}
