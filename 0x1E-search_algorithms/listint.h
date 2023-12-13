#ifndef LISTINT_H
#define LISTINT_H

/* Structure for a node in the linked list */
typedef struct listint_s {
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

#endif /* LISTINT_H */

