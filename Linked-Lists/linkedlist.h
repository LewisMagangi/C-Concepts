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
void add_firstdata(node_t **head, int d);
node_t* add_firstnode(node_t* head, int d);
node_t* add_firstnode2(node_t **head, int d);
node_t* add_node_at_pos(node_t *head, int data, int pos);

#endif /* MAIN_H */
