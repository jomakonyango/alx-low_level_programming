#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *next_node;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
next_node = (*head)->next;
free(*head);
*head = next_node;
return (1);
}

current_node = *head;
for (i = 0; i < index - 1 && current_node != NULL; i++)
{
current_node = current_node->next;
}

if (current_node == NULL || current_node->next == NULL)
return (-1);

next_node = current_node->next->next;
free(current_node->next);
current_node->next = next_node;
return (1);
}
