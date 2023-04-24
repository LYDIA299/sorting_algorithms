#include "sort.h"

/**
 * bubble_sort - sorts integer arrays in ascending order
 * @ array: pointer to the array
 * @ size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, flag;

	if (size <=1)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = i; j < (size - 1); j++)
		{
			flag = 0;
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			return;
	}
}
