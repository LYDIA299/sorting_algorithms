#include "sort.h"

void swap_array(int *a, int *b);

/**
 * bubble_sort - sorts integer arrays in ascending order
 * @array: pointer to the array
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	if (size <= 1)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		flag = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_array(&array[j], &array[j + 1]);
				print_array(array, size);
				flag++;
			}
		}
		if (flag == 0)
			return;
	}
}

/**
 * swap_array - swaps two elements
 *
 * @a: first element
 * @b: second element
 * Return: nothing
 */
void swap_array(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
