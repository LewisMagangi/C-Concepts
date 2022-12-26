#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

struct node
{
        int data;
        struct node *link;
};
  
struct node *head;
void print_data(struct node *head);
  
#endif /* MAIN_H */
