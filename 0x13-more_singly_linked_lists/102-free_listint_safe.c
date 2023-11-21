#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current_node, *next_node;
const listint_t *slow, *fast;

if (*h == NULL)
return (0);
slow = *h;
fast = (*h)->next;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
if (slow == fast)
{
current_node = *h;
do {
next_node = current_node->next;
free(current_node);
count++;
current_node = next_node;
} while (current_node != slow);
*h = NULL;
return (count);
}
slow = slow->next;
fast = fast->next->next;
}
current_node = *h;
while (current_node != NULL)
{
next_node = current_node->next;
free(current_node);
count++;
current_node = next_node;
}

*h = NULL;
return (count);
}
