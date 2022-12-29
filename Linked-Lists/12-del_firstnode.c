#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* del_firstnode(node_t* head)
{
        if (head == NULL)
	         printf("Linked List is empty");
	else
	  {
	         node_t *temp = head;
		 head = head -> link;
		 free(temp);
		 temp = NULL;
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

	printf("Before deleting the first node");
	print_data(head);
	
	head = del_firstnode(head);
	printf("After deleting the first node");
	print_data(head);
}
