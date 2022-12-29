#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* del_entirelist(node_t* head)
{
        node_t *temp = head;
	while(temp != NULL)
	  {
		  temp = temp -> link;
		  free(head);
	          head = temp;
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
	head -> data = 923;
	head -> link = NULL;

	current = (node_t*)malloc(sizeof(node_t));
	current -> data = 293;
	current -> link = NULL;
	head -> link = current;

	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 467;
	current2 -> link = NULL;
	current -> link = current2;

	printf("Before deleting the entire linked list : ");
	print_data(head);
	head = del_entirelist(head);
	printf("After deleting the entire linked list : \n");
	print_data(head);
}
