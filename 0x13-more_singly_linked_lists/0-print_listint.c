#include "lists.h"

/**
 * print_listint - print all elements of a linked list
 * @h: linked list
 * 
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    if (h==NULL)
        return (0);
    while (h != NULL)
    {
        printf(a"%d\n", h->n);
        h=h->next;
        count++;
    }
    return(count);
}
