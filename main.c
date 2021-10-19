#include <stdio.h>
#include "simplelist.h"
int main(){
    char c1[] = "Node1";
    char c2[] = "Node2";
    char c3[] = "Node3";
    char c0[] = "Node0";

    struct node * end = NULL;
    end = insert_front(end,3,c3);
    end = insert_front(end, 2, c2);
    end = insert_front(end, 1, c1);
    end = insert_front(end, 0,c0);
    
    print_list(end);
    end = remove_node(end, 0);
    printf("Removed First Element: \n");
    print_list(end);
    printf("Original Point: %p\n", end);
    free_list(end);
    printf("After Point: %p\n", end);
    return 0;
}
