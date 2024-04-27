#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *temp = *head;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return (-1);

    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);

    return (1);
}
