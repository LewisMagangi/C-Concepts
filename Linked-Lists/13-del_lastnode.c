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
        node_t *head = NULL;
        node_t *current = NULL;
	node_t *current2 = NULL;
	node_t *ptr = NULL;

	head = (node_t*)malloc(sizeof(node_t));
	head -> data = 972;
	head -> link = NULL;

	current = (node_t*)malloc(sizeof(node_t));
	current -> data = 684;
	current -> link = NULL;
	head -> link = current;

	current2 = (node_t*)malloc(sizeof(node_t));
	current2 -> data = 869;
	current2 -> link = NULL;
	current -> link = current2;

	printf("Before deleting the last node: ");
	print_data(head);
	head = del_lastnode(head);
	printf("After deleting the last node: ");
	print_data(head);
}
