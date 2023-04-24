#include "sort.h"

/**
 * insertion_sort - sorts a doubly linked list od integers in ascending order
 * @list: list to sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	int i, j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	insert_el = current->prev;
	while (current != NULL)
	{
