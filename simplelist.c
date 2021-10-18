//
//  simplelist.c
//  Systems
//
//  Created by Theodore Fahey on 10/15/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    int id;
    char name[100];
    struct node * next;
};
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
    while (num -> next != NULL){
        struct node * holder = num -> next;
        free(num);
        num = holder;
        
    }
    return ans;
}
int main(){
    char c1[] = "Node1";
    char c2[] = "Node2";
    char c3[] = "Node3";
    char c0[] = "Node0";

    struct node * end = NULL;
    struct node * n3 = insert_front(end,3,c3);
    struct node * n2 = insert_front(n3, 2, c2);
    struct node * n1 = insert_front(n2, 1, c1);
    struct node * n0 = insert_front(n1, 0,c0);
    
    print_list(n0);
    printf("Original Point: %p\n", n0);
    free_list(n0);
    printf("After Point: %p\n", n0);
    return 0;
}

