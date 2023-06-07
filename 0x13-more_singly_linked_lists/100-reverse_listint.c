#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - recursively reverses a listint list
 *
 * @first: node to reverse
 * @second: node after node to reverse
 *
 * Return: void
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *ptr, *prev = NULL;

	ptr = first;
	while (ptr->next != second)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (prev != NULL)
		prev->next = first;
	second = first->next;
	first->next = ptr->next;
	if (first != ptr && second != first)
		second = reverse_recur(second, first);
	ptr->next = second;
	return (ptr);
}
