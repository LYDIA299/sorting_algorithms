#include "sort.h"

void swap_nodes(listint_t *cur_node, listint_t *prev_node, listint_t **head);
/**
 * insertion_sort - sorts a doubly linked list od integers in ascending order
 * @list: list to sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur_node = NULL, *prev_node = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cur_node = (*list)->next;
	prev_node = cur_node->prev;

	while (cur_node != NULL)
	{
		prev_node = cur_node->prev;
		while (prev_node != NULL && prev_node->n > cur_node->n)
		{
			swap_nodes(cur_node, prev_node, list);
			prev_node = cur_node->prev;
		}
		cur_node = cur_node->next;
	}
}

/**
 * swap_nodes - swaps the nodes
 * @cur_nose: less node
 * @prev_node: higher node
 * @head: head pointer
 * Return: nothing
 */
void swap_nodes(listint_t *cur_node, listint_t *prev_node, listint_t **head)
{
	listint_t *after_node = cur_node->next;
	listint_t *before_node = prev_node->prev;

	if (after_node != NULL)
	{
		after_node->prev = prev_node;
	}
	if (before_node != NULL)
	{
		before_node->next = cur_node;
	}
	prev_node->next = after_node;
	cur_node->prev = before_node;
	cur_node->next = prev_node;
	prev_node->prev = cur_node;

	/* making sure that the head pointer is pointing to the first node */
	if (*head == prev_node)
		*head = cur_node;
	print_list(*head);
}
