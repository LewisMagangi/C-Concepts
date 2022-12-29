#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

void print_data(node_t *head)
{
        node_t *ptr;

	if (head == NULL)
	          printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	  {
	          printf("prt -> data: %d\n", ptr -> data);
	          ptr = ptr -> link;
	  }
} 
