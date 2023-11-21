#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast;

if (head == NULL)
return (0);
slow = head;
fast = head->next;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
slow = slow->next;
fast = fast->next->next;
}
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}
return (count);
}
