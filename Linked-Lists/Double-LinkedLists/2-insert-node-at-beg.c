
#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node *prev;
        struct node *next;
};

void print_data(struct node *head)
{
        struct node *ptr;

	if (head == NULL)
	        printf("Linked List is empty");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	  {
	          printf("prt->data: %d\n", ptr->data);
		  ptr = ptr -> next;
	  }
}

struct node* insertnode_toempty(struct node* head, int data)
{
        struct node* temp = malloc(sizeof(struct node));
        temp -> data = data;
        temp -> prev = NULL;
        temp -> next = NULL;
	head = temp;
	return head;
};

struct node* insertnode_at_beg(struct node* head, int data)
{
        struct node* temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> prev = NULL;
	temp -> next = NULL;
	temp -> next = NULL;
	head = temp;
	return head;
};

int main()
{
        struct node *head = NULL;

	head = insertnode_toempty(head, 45);

	printf("Before inserting a node at the beginning of the linked list : \n");
	print_data(head);
	head = insertnode_at_beg(head, 876);

	printf("After inserting a node at the beginning of the linked list : \n");
	print_data(head);
	return (0);
}
