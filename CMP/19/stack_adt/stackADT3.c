#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node {
    Item data;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

static void terminate(const char *msg) {
    printf("%s\n", msg);
    exit(EXIT_FAILURE);
}


Stack create(void) {
    Stack s = malloc(sizeof(struct stack_type));

    if (s == NULL) {
        terminate("Error in create: stack could not be created.");
    }

    s->top = NULL;
    return s;
}


void destroy(Stack s) {
    make_empty(s);
    free(s);
}


void make_empty(Stack s) {
    while(!is_empty(s)) {
        pop(s);
    }
}


bool is_empty(Stack s) {
    return s->top == NULL;
}


bool is_full(Stack s) {
    return false;
}


void push(Stack s, Item i) {
    struct node *new = malloc(sizeof(struct node));

    if (new == NULL) {
        terminate("Error in push: stack is full.");
    }

    new->data = i;
    new->next = s->top;
    s->top = new;
}


Item pop(Stack s) {
    struct node *old;
    Item i;

    if (is_empty(s)) {
        terminate("Error in pop: stack is empty.");
    }

    old = s->top;
    i = s->top->data;

    s->top = s->top->next;
    free(old);

    return i;
}


