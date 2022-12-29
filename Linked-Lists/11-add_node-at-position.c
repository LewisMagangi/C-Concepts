#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* add_node_at_pos(node_t *head, int data, int pos)
{
        node_t *ptr = head;
        node_t *ptr2 = malloc(sizeof(node_t));
	ptr2 -> data = data;
	ptr2 -> link = NULL;

	if (pos == 1)
	          add_firstnode(head, data);
	else
	  {
	          pos --;
	          while(pos != 1)
		    {
		            ptr = ptr -> link;
			    pos--;
		    }
		  ptr2 -> link = ptr -> link;
		  ptr -> link = ptr2;
		  
		  return head;
	  }
}
int main()
{
        node_t *head = NULL;
        node_t *current = NULL;
        node_t *current2 = NULL;
       	node_t *ptr = NULL;

	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 45;
	head -> link = NULL;

	current = (node_t*)malloc(sizeof(node_t));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;

	int data = 78, pos = 1;

	printf("Before adding %d a node at position : %d \n", data, pos);
	print_data(head);

	head = add_node_at_pos(head, data, pos);
        printf("After adding %d a node at position : %d \n", data, pos);
	print_data(head);

	pos = 2, data = 908;
	head = add_node_at_pos(head, data, pos);
	printf("After adding %d a node at position : %d \n", data, pos);
	print_data(head);

	return (0);
}
