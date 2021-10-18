#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    int id;
    char name[100];
    struct node * next;
};
void print_list(struct node * num);
struct node * insert_front(struct node * num, int this_id, char * this_name);
struct node * free_list(struct node * num);
