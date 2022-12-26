#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void count_of_nodes(struct node *head)
{
	int count = 0;
	struct node *ptr;

	if (head == NULL)
		printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("No of nodes: %d\n", count);
}

int main()
{
	struct node *head = NULL;
	struct node *current = NULL;
	struct node *current2 = NULL;

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	current = malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;
	count_of_nodes(head);
	return (0);
}
