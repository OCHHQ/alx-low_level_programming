#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if the deletion was successful, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    dlistint_t *next_node;
    unsigned int i;

    current = *head;

    if (current == NULL)
        return -1;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return -1;

    next_node = current->next->next;
    free(current->next);
    current->next = next_node;

    if (next_node != NULL)
        next_node->prev = current;

    return 1;
}

