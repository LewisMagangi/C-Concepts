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

struct node* insertnode_at_end(struct node* head, int data)
{
        struct node* temp = malloc(sizeof(struct node));
	struct node* tp = malloc(sizeof(struct node));

	temp -> data = data;
	temp -> prev = NULL;
	temp -> next = NULL;
	temp -> next = NULL;
	tp = head;

	while (tp -> next != NULL)
	        tp = tp -> next;
	tp -> next = temp;

	temp -> prev = tp;

	return head;
};

struct node* insertnode_after_position(struct node* head, int data, int position)
{
        struct node* temp = malloc(sizeof(struct node));
	struct node* newnode = NULL;
	struct node* temp2 = NULL;

	newnode = insertnode_toempty(newnode, data);

	while (position != 1)
	  {
	        temp = temp -> next;
		position--;
	  }

	temp2 = temp -> next;
        temp -> next = newnode;
	temp2 -> prev = newnode;
	newnode -> next = temp2;
	newnode -> prev = temp;
	
	return head;
};

int main()
{
        struct node *head = NULL;

	head = insertnode_toempty(head, 45);
	head = insertnode_at_beg(head, 876);

	printf("Before inserting a node at the end of the linked list : \n");
	print_data(head);
	head = insertnode_at_end(head, 364);

	printf("After inserting a node at the end of the linked list : \n");
	print_data(head);
	return (0);
}
