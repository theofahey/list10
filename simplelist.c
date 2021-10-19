//
//  simplelist.c
//  Systems
//
//  Created by Theodore Fahey on 10/15/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simplelist.h"


void print_list(struct node * num){
    printf("Node ID: %d \t Node Name: %s \n", num -> id, num -> name);
    
    if (num -> next != NULL){
        print_list(num -> next);
    }
    
}
struct node * insert_front(struct node * num, int this_id, char * this_name){
    struct node * n = malloc(sizeof(struct node));
    n->id = this_id;
    strncpy(n->name,this_name,100);
    n->next = num;
    return n;
}
struct node * free_list(struct node * num){
    struct node * ans = malloc(sizeof(struct node));
    while (num != NULL){
        struct node * holder = num -> next;
        free(num);
        num = holder;
        
    }
    return ans;
}
struct node * remove_node(struct node * front, int data){
    if (front -> id == data){
	struct node * holder = front -> next;
	free(front);
	front = holder;
	}
    return front; 

}
