#include "sort.h"

/**
 * selection_sort - sorts array of integers using selection sort algo
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, min;
	int *swap = NULL;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		swap = malloc(sizeof(int) * 1);
		*swap = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (i != min)
		{
			array[i] = array[min];
			array[min] = *swap;
			free(swap);
			print_array(array, size);
		}
		else
			free(swap);
	}
}
