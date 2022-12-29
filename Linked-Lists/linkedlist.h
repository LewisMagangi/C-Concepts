#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

typedef struct node_s
{
        int data;
        struct node_s *link;
}node_t;
 
void count_of_nodes(node_t *head);
void print_data(node_t *head);
  
#endif /* MAIN_H */
