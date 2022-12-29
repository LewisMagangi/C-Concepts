#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void count_of_nodes(node_t * head)
{
        node_t * ptr;
	int count = 0;

	if (head == NULL)
		printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> link;
	}
	printf("No of nodes: %d\n", count);
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
	count_of_nodes(head);
	print_data(head);
	return (0);
}
