#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in new node
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int count = 0;

    if (h == NULL)
    {
        return NULL;
    }

    if (idx == 0)
    {
        return add_dnodeint(h, n);
    }

    current = *h;
    while (current != NULL)
    {
        if (count == idx - 1)
        {
            new_node = malloc(sizeof(dlistint_t));
            if (new_node == NULL)
            {
                return NULL;
            }
            new_node->n = n;
            new_node->next = current->next;
            new_node->prev = current;
            if (current->next != NULL)
            {
                current->next->prev = new_node;
            }
            current->next = new_node;
            return new_node;
        }
        count++;
        current = current->next;
    }

    return NULL;
}

