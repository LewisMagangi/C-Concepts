#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
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
		printf("prt->data: %d\n", ptr -> data);
		ptr = ptr -> link;
	}
}

struct node* add_firstnode(struct node* head, int d)
{
       struct node *ptr = malloc(sizeof(struct node));
       ptr -> data = d;
       ptr -> link = NULL;
       
       ptr -> link = head;
       head = ptr;
       return (head);
}

struct node* add_node_at_pos(struct node *head, int data, int pos)
{
        struct node *ptr = head;
        struct node *ptr2 = malloc(sizeof(struct node));
	ptr2 -> data = data;
	ptr2 -> link = NULL;

	if (pos == 1)
	          add_firstnode(head, data);
	else
	  {
	          pos --;
	          while(pos != 1)
		    {
		            ptr = ptr -> link;
			    pos--;
		    }
		  ptr2 -> link = ptr -> link;
		  ptr -> link = ptr2;
		  
		  return head;
	  }
}
int main()
{
        struct node *head = NULL;
        struct node *current = NULL;
	struct node *current2 = NULL;
       	struct node *ptr = NULL;

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 45;
	head -> link = NULL;

	current = (struct node*)malloc(sizeof(struct node));
	current -> data = 98;
	current -> link = NULL;
	head -> link = current;

	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 3;
	current2 -> link = NULL;
	current -> link = current2;

	int data = 78, pos = 1;

	printf("Before adding %d a node at position : %d \n", data, pos);
	print_data(head);

	head = add_node_at_pos(head, data, pos);
	
	printf("After adding %d a node at position : %d \n", data, pos);
	print_data(head);

	return (0);
}
