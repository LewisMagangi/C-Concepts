#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* del_node_at_pos(node_t** head, int position)
{
        node_t *current = *head;
        node_t *previous = *head;
        if (head == NULL)
	         printf("Linked List is empty");
	else if(position == 1)
	  {
		 *head = current -> link;
		 free(current);
		 current = NULL;
	  }
	else
	  {
	         while(position != 1)
		   {
		           previous = current;
			   current = current -> link;
			   position--;
		   }
		 previous -> link = current -> link;
		 free(current);
		 current = NULL;
	  }
	return(*head);
}

int main()
{
        node_t *head = NULL;
        node_t *current = NULL;
	node_t *current2 = NULL;
	node_t *ptr = NULL;
	int position = 2;
	
	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 485;
	head -> link = NULL;

	current = (node_t*)malloc(sizeof(node_t));
	current -> data = 298;
	current -> link = NULL;
	head -> link = current;

	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 376;
	current2 -> link = NULL;
	current -> link = current2;

	printf("Before deleting the node at position %d ", position);
	print_data(head);
	head = del_node_at_pos(&head, position);
	printf("After deleting the node at position %d ", position);
	print_data(head);
}
