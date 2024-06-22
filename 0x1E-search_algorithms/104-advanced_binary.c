#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1
 * if value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
    size_t i, low, high;

    if (array == NULL)
        return (-1);
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        printf("Searching in array: ");
        for (i = low; i < high; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);
        i = low + (high - low) / 2;
        if (array[i] == value)
            return (i);
        if (array[i] < value)
            low = i + 1;
        else
            high = i;
    }
    return (-1);
}