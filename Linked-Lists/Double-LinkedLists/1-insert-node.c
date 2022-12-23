#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node *prev;
        struct node *next;
};

struct node* insertnode_toempty(struct node* head, int data)
{
        struct node* temp = malloc(sizeof(struct node));
        temp -> data = data;
        temp -> prev = NULL;
        temp -> next = NULL;
	head = temp;
	return head;
};

int main()
{
        struct node *head = NULL;
	head = insertnode_toempty(head, 45);
	
	printf("%d\n", head->data);
	return (0);
}
