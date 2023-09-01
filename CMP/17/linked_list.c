#include <stdlib.h>
#include <stdio.h>

struct node *add_to_list(struct node *list, int n);
struct node *search_list(struct node *list, int n);

struct node {
    int value;
    struct node *next;
};


int main(void) {

    //empty list
    struct node *head = NULL;
    struct node *new_node;

    new_node = malloc(sizeof(struct node));

    //update value of new_node: 2 different ways
    (*new_node).value = 10;
    new_node->value = 10;

    head = add_to_list(head, 10);
    head = add_to_list(head, 9);
    head = add_to_list(head, 8);
    head = add_to_list(head, 7);
    head = add_to_list(head, 6);
    head = add_to_list(head, 5);

    return 0;
}


//prepends node to front of the list
struct node *add_to_list(struct node *list, int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list func\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;

    return new_node;
}


//second version uses double pointer to modify where head points
// we point the new node's next to the current head, then we point head
// to the new node.
void add_to_list2(struct node **list, int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list func\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = *list;
    *list = new_node;
}


struct node *search_list(struct node *list, int n) {
    struct node *p = NULL;

    for (p = list; p != NULL; p = p->next) {
        if (p->value == n) {
            return p;
        }
    }

    return NULL;
}


// there's no harm in incrementing list b/c *list in the function is a COPY of the pointer!
struct node *search_list2(struct node *list, int n) {

    for (; list != NULL; list = list->next) {
        if (list->value == n) {
            return list;
        }
    }

    return NULL;
}


// can also use a while loop instead AND check if the current node's value is equal to n in the condition
struct node *search_list3(struct node *list, int n) {
    while (list != NULL && list->value != n) {
        list = list->next;
    }

    return list;
}


// I hate this! Too much stuff in the for loop in my opinion.
struct node *delete_from_list(struct node *list, int n) {
    // curr will point to the node to be deleted after running through this for loop
    struct node *prev, *cur;

    for (cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;

    free(cur);
    return list;
}


// I like the while loop in this a little bit more. We could also check the special condition of
// the first node being removed before iterating at all and return early! This would simplify things
// cause we don't need to check for it later and we wouldn't need a dummy node!
struct node *delete_from_list2(struct node *list, int n) {
    struct node *cur, *dummy, *tmp;

    dummy = malloc(sizeof(struct node));
    dummy->next = list;
    cur = dummy;

    while (cur->next && cur->next->value != n) 
        cur = cur->next;
         
    if (cur->next == NULL)
        return list;
    if (cur == dummy)
        list = list->next;
    else {
        tmp = cur->next;
        cur->next = cur->next->next;
    }

    free(tmp);
    free(dummy);
    return list;
}



struct node *delete_from_list3(struct node *list, int n) {

    struct node *tmp;

    if (list->value == n) {
        list = list->next;
        return list;
    }

    while (list->next && list->next->value != n) 
        list = list->next;
         
    if (list->next == NULL)
        return list;
    else {
        tmp = list->next;
        list->next = list->next->next;
    }

    free(tmp);
    return list;
}


// here we check for the special condition of first element being the node to be deleted up front
// and we simplify the while loop while checking for value of n within the while loop, which
// also simplifies how much logic we handle after the while loop.
struct node *delete_from_list4(struct node *list, int n) {
    
    struct node *tmp;

    if (list->value == n) {
        list = list->next;
        return list;
    }

    while (list->next) {
        if (list->next->value == n) {
            tmp = list->next;
            list->next = list->next->next;
            free(tmp);
            break;
        }
        list = list->next;
    } 
     
    return list;
}
