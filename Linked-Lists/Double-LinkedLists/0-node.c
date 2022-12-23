#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node *prev;
        struct node *next;
};

int main()
{
        struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));

	head -> data = 45;
	head -> prev = NULL;
	head -> next = NULL;
	
	printf("%d\n", head->data);
	return (0);
}
