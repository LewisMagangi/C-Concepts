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

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	current = malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;
	printf("%d\n", current->data);
	printf("%d\n", head->data);

	return (0);
}
