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
		printf("Linked List is deleted succesfully! \n");
	ptr = NULL;
	ptr = head;
	while (ptr != NULL)
	{
		printf("prt->data: %d\n", ptr->data);
		ptr = ptr -> link;
	}
}
void add_node_at_pos(struct node *head, int data, int pos)
{
        struct node *ptr = head;
        struct node *ptr2 = malloc(sizeof(struct node));
	ptr2 -> data = data;
	ptr2 -> link = NULL;

	pos--;
	while(pos != 1)
	  {
	          ptr = ptr -> link;
		  pos--;
	  }
	ptr2 -> link = ptr -> link;
	ptr -> link = ptr2;
}
struct node* reverse_list(struct node *head)
{
        struct node *temp = NULL;
	struct node *temp2 = NULL;

	while (head != NULL)
	  {
                  head -> link = NULL;
		  temp -> link = head;
		  temp2 -> link = temp;
	  }
        head = temp;	  
	return head;
	  
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

	int data = 69, pos = 2;
	add_node_at_pos(head, data, pos);

	while (ptr != NULL)
	  {
	          printf("prt -> data: %d\n", ptr -> data);
		  ptr = ptr -> link;
	  }

	printf("Before reversing the entire linked list : ");
	print_data(head);
	head = reverse_list(head);
	printf("After reversing the entire linked list : ");
	print_data(head);
}
