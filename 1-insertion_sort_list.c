#include "sort.h"

/**
 * insertion_sort - sorts a doubly linked list od integers in ascending order
 * @list: list to sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur_node = NULL, *prev_node = NULL, *tmp_node = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cur_node = (*list)->next;
	prev_node = cur_node->prev;
	while (cur_node != NULL)
	{
		tmp_node = cur_node;
		cur_node = cur_node->next;
		prev_node->next = cur_node;
		cur_node->prev = prev_node;
		while (prev_node != NULL)
		{
			if (tmp_node->n > prev_node->n)
			{
				/* swap time */
				tmp_node->next = prev_node->next;
				tmp_node->prev = prev_node;
				prev_node->next->prev = tmp_node;
				prev_node->next = tmp_node;
				print_list(*list);
				break;
			}
			prev_node = prev_node->prev;
		}
		if (prev_node == NULL)
		{
			tmp_node->next = *list;
			tmp_node->prev = prev_node;
			(*list)->prev = tmp_node;
		}
	}
}
