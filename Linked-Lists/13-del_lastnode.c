#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

node_t* del_lastnode(node_t* head)
{
        if (head == NULL)
	         printf("Linked List is empty");
	else if(head -> link == NULL)
	  {
		 free(head);
		 head = NULL;
	  }
	else
	  {
	         node_t *temp = head;
		 node_t *temp2 = head;
		 while(temp -> link != NULL)
		   {
		     temp2 = temp;
		     temp = temp -> link;
		   }
		 temp2 -> link = NULL;
		 free(temp);
		 temp = NULL;
	  }
	return head;
}
int main()
{
        struct node *head = NULL;
        struct node *current = NULL;
	struct node *current2 = NULL;
	struct node *ptr = NULL;

	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 972;
	head -> link = NULL;

	current = (struct node*)malloc(sizeof(struct node));
	current -> data = 084;
	current -> link = NULL;
	head -> link = current;

	current2 = (struct node*)malloc(sizeof(struct node));
	current2 -> data = 869;
	current2 -> link = NULL;
	current -> link = current2;

	printf("Before deleting the last node: ");
	print_data(head);
	head = del_lastnode(head);
	printf("After deleting the last node: ");
	print_data(head);
}
