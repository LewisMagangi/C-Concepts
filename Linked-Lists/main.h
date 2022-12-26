#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

struct node {
  int data;
  struct node *link;
}
  
typedef struct node node_t;
void print_data(struct node *head);
  
#endif /* MAIN_H */
