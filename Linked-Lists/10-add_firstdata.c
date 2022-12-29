#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* add_firstdata(node_t* head, int d)
{
        node_t *ptr = malloc(sizeof(node_t));
	ptr -> data = d;
	ptr -> link = NULL;
	
	ptr -> link = head;
	head = ptr;
        return head;
}

int main()
{
        node_t *head = NULL;
	node_t *current = NULL;
	node_t *current2 = NULL;
	
	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 45;
	head -> link = NULL;
	
	current = malloc(sizeof(node_t));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;
	
	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;
	
	printf("Before adding data in the linked list : ");
	print_data(head);
	
	head = add_firstdata(head, 67);
	printf("After adding data in the linked list : ");
	print_data(head);

	head = add_firstdata(head, 82);
	printf("After adding data in the linked list : ");
	print_data(head);
	
	return (0);
}
