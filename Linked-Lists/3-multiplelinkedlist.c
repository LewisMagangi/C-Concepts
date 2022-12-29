#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

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

	head -> link -> link = current;
	printf("current2 -> data:%d\n", current2->data);
	return (0);
}
