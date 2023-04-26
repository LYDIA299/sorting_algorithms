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
	int min_val, min_index;

	if (array == NULL || size <= 1)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		min_index = i;
		min_val = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_val)
			{
				min_val = array[j];
				min_index = j;
			}
		}
		if (array[i] != min_val)
		{
			array[min_index] = array[i];
			array[i] = min_val;
			print_array(array, size);
		}
	}
}
