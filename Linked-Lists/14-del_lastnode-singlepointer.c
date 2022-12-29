#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* del_lastnode_using_single_pointer(node_t* head)
{
        if (head == NULL)
	         printf("Linked List is empty");
	else if(head -> link == NULL)
	  {
		 free(head);
		 head = NULL;
	  }
	else
	  {
	         node_t *temp = head;
		 while(temp -> link -> link != NULL)
		          temp = temp -> link;
	     
		 free(temp -> link);
		 temp -> link = NULL;
	  }
	return head;
}
int main()
{
        node_t *head = NULL;
        node_t *current = NULL;
	node_t *current2 = NULL;
        node_t *ptr = NULL;

	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 936;
	head -> link = NULL;

	current = (node_t*)malloc(sizeof(node_t));
	current -> data = 356;
	current -> link = NULL;
	head -> link = current;

	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 986;
	current2 -> link = NULL;
	current -> link = current2;

	printf("Before deleting the last node using single pointer : ");
	print_data(head);
	head = del_lastnode_using_single_pointer(head);
	printf("After deleting the last node using single pointer : ");
	print_data(head);
}
