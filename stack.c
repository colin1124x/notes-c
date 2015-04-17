#include <stdlib.h>

typedef struct items {
    int data;
    struct items *link;
} ITEM;

typedef struct stack {
    ITEM *top;
} STACK;

void initStack(STACK *s) {
    s->top = NULL;
}
void pushStack(STACK *s, int y) {
    ITEM *x;
    x = (ITEM *) malloc(sizeof(ITEM));
    x->data = y;
    x->link = s->top;
    s->top = x;
}
int popStack(STACK *s) {
    ITEM *x = s->top;
    int d = x->data;
    s->top = s->top->link;
    free(x);

    return d;
}
int stackIsEmpty(STACK *s) {
    return s->top == NULL;
}