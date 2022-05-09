#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

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

	head -> link -> link = current;
	printf("current2 -> data:%d\n", current2->data);
	return (0);
}
