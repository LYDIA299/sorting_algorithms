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
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_list(array);
			}
		}
	}
}
