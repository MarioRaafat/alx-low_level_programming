#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1
 * if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    int left, right, i, jump;

    if (array == NULL)
        return (-1);
    jump = sqrt(size);
    left = 0;
    right = jump;
    while (right < size && array[right] < value)
    {
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        left = right;
        right += jump;
    }
    printf("Value checked array[%d] = [%d]\n", left, array[left]);
    printf("Value found between indexes [%d] and [%d]\n", left, right);
    for (i = left; i < size && i <= right; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}