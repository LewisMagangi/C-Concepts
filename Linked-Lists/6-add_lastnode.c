#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void add_lastnode(node_t *head, int data)
{
	node_t *ptr, *temp;

	ptr = head;
	temp = (node_t*)malloc(sizeof(node_t));

	temp -> data = data;
	temp -> link = NULL;

	while(ptr -> link != NULL)
		ptr = ptr -> link;
	ptr -> link = temp;
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

	printf("Before adding a node at the linked list : ");
	print_data(head);

	add_lastnode(head, 67);
	printf("After adding a node at the linked list : ");
	print_data(head);
	
	add_lastnode(head, 82);
	printf("After adding another node at the linked list : ");
	print_data(head);
	
	return (0);
}
