#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
	node_t *head = NULL;
	node_t *current = NULL;

	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 45;
	head -> link = NULL;

	current = malloc(sizeof(node_t));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;
	printf("%d\n", current -> data);
	printf("%d\n", head -> data);

	return (0);
}
