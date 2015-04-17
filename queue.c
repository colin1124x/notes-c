#include <stdlib.h>

typedef struct items ITEM;
typedef struct queue QUEUE;

struct items {
    int data;
    ITEM *link;
}

struct queue {
    int size;
    ITEM *front, *rear;
}

void initQueue(QUEUE *q) {
    q->size = 0;
    q->front = q->rear = NULL;
}

int queueIsEmpty(QUEUE *q) {
    return q->front == NULL;
}

int queueLength(QUEUE *q) {
    return q->size;
}

void addQueue(QUEUE *q, int y) {
    ITEM *x = (ITEM *) malloc(sizeof(ITEM));
    x->data = y;
    x->link = NULL;
    if (q->front == NULL) {
        q->front = x;
    } else {
        q->rear->link = x;
    }
    q->rear = x;
    q->size++;
}

int deleteQueue(QUEUE *q) {
    ITEM *x = q->front;
    int rel = x->data;
    q->front = x->link;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    q->size--;
    free(x);
    return rel;
}

void main() {
    QUEUE *q;
    int i;
    initQueue(q);
    for (i = 1; i < 10; i++) {
        addQueue(q, i);
    }

    while ( ! queueIsEmpty(q)) {
        printf("%d\n", deleteQueue(q));
    }
}
