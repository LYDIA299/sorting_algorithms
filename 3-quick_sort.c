#include "sort.h"
void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void quicksort(int *array, int low, int high, size_t size);

/**
 * quick_sort - sorts an array using quick sort algorithm
 * @array: array to sort
 * @size: size of an array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - sorts an array (a partition recursively)
 * @array: array to be sorted
 * @low: min index of the partition
 * @high: max index of the partition
 * @size: the size of the array to sort
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high) {
		int pi = partition(array, low, high, size);
		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
 * partition - sort an array of integers using quick_sort
 *lomuto implementation with pivot in last element of partition
 * @array: array to sort
 * @low: minimum value
 * @high: max value
 * @size: the size of the array to sort
 * Return: index + 1
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;


	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++) {
		if (array[j] < pivot) {
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return i + 1;
}

/**
 * swap_aray - swaps two elements
 * @a: first element
 * @b: second element
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
