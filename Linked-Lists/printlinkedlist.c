#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void print_data(struct node *head)
{
        struct node *ptr;

	if (head == NULL)
	          printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	  {
	          printf("prt->data: %d\n", ptr -> data);
	          ptr = ptr -> link;
	  }
} 
