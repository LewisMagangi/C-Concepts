#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_data(node_t *head)
{
	node_t *ptr;

	if (head == NULL)
		printf("Linked List is empty \n");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		printf("\nprt -> data: %d\n", ptr -> data);
		ptr = ptr -> link;
	}
}
