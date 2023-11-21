#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node, *next_node;

if (*head == NULL || (*head)->next == NULL)
return (*head);

prev_node = NULL;
next_node = NULL;

while (*head != NULL)
{
next_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}

*head = prev_node;
return (*head);
}
