#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


struct node {
    int data;
    struct node *next;
};


static struct node *top = NULL;


static void terminate(const char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}


void make_empty(Stack *s) {
    while (!is_empty(s)) {
        pop(s);
    }
}


bool is_empty(const Stack *s) {
    return s->top == NULL;
}


bool is_full(const Stack *s) {
    return false;
}


void push(Stack *s, int i) {
   struct node *new_node = malloc(sizeof(struct node)); 
   if (new_node == NULL) {
       terminate("Error in push: stack is full");
   }
    
   new_node->data = i;
   new_node->next = top;
   s->top = new_node;
}


int pop(Stack *s) {
    struct node *popped;
    int i;

    if (is_empty(s)) {
        terminate("Error in pop: stack is empty");
    }

    popped = s->top;
    i = popped->data;

    s->top = s->top->next;
    free(popped);

    return i;
}


