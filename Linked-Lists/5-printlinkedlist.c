#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_data(struct node *head)
{
	struct node *ptr;

	if (head == NULL)
		printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		printf("\nprt -> data: %d\n", ptr -> data);
		ptr = ptr -> link;
	}
}
