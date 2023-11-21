#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

/* if the list is empty, return NULL */
if (head == NULL)
return (NULL);
/* use two pointers to detect a loop in the list */
slow = head;
fast = head->next;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
/* if the two pointers meet, there is a loop */
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
/* return the address of the loop start */
return (slow);
}
/* move the slow pointer by one and the fast pointer by two */
slow = slow->next;
fast = fast->next->next;
}

/* if there is no loop, return NULL */
return (NULL);
}
