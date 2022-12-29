#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* add_firstnode(node_t* head, int d)
{
	node_t *ptr = malloc(sizeof(node_t));
	ptr -> data = d;
	ptr -> link = NULL;

	ptr -> link = head;
	head = ptr;
	return (head);
}
int main()
{
	struct node *head = NULL;
	struct node *current = NULL;
	struct node *current2 = NULL;
	struct node *ptr = NULL;

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	current = (struct node*)malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;

	ptr = (struct node*)malloc(sizeof(struct node));
	ptr = head;
	head = add_firstnode(head, 2);
	head -> link = ptr;
	add_lastnode(head, 67);
	add_lastnode(head, 82);
	print_data(head);
	return (0);
}
