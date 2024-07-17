#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if value
 * is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next_node;

	if (list == NULL)
		return (NULL);

	current = list;
	next_node = list->express;

	while (next_node != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", next_node->index, next_node->n);
		if (next_node->n >= value || next_node->express == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   current->index, next_node->index);
			break;
		}
		current = next_node;
		next_node = next_node->express;
	}

	if (next_node == NULL)
	{
		current = list;
		while (current->next != NULL)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			   current->index, current->index);
	}

	while (current != NULL && current->index <= next_node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
