#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *node = NULL;
    int sum = 0;

    /* Test 0. Print list */
    printf("Test 0. Print list:\n");
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    print_dlistint(head);
    printf("-----------------\n");

    /* Test 1. List length */
    printf("Test 1. List length:\n");
    printf("Length of list: %lu\n", dlistint_len(head));
    printf("-----------------\n");

    /* Test 2. Add node */
    printf("Test 2. Add node:\n");
    add_dnodeint(&head, 3);
    print_dlistint(head);
    printf("-----------------\n");

    /* Test 3. Add node at the end */
    printf("Test 3. Add node at the end:\n");
    add_dnodeint_end(&head, 4);
    print_dlistint(head);
    printf("-----------------\n");

    /* Test 4. Free list */
    printf("Test 4. Free list:\n");
    free_dlistint(head);
    head = NULL;
    printf("-----------------\n");

    /* Test 5. Get node at index */
    printf("Test 5. Get node at index:\n");
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    node = get_dnodeint_at_index(head, 1);
    if (node != NULL)
        printf("Node at index 1: %d\n", node->n);
    else
        printf("Node at index 1 not found\n");
    printf("-----------------\n");

    /* Test 6. Sum list */
    printf("Test 6. Sum list:\n");
    sum = sum_dlistint(head);
    printf("Sum of list: %d\n", sum);
    printf("-----------------\n");

    /* Test 7. Insert at index */
    printf("Test 7. Insert at index:\n");
    insert_dnodeint_at_index(&head, 1, 10);
    print_dlistint(head);
    printf("-----------------\n");

    /* Test 8. Delete at index */
    printf("Test 8. Delete at index:\n");
    delete_dnodeint_at_index(&head, 1);
    print_dlistint(head);
    printf("-----------------\n");

    return (EXIT_SUCCESS);
}
