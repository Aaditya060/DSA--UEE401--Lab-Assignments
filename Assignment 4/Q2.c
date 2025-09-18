#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;

void push(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = top;
    top = n;
}

void pop() {
    if (top == NULL) {
        printf("Underflow\n");
        return;
    }
    printf("Popped %d\n", top->data);
    struct Node* t = top;
    top = top->next;
    free(t);
}

void display() {
    struct Node* t = top;
    if (!t) {
        printf("Empty\n");
        return;
    }
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    int ch, x;
    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 4) break;
        switch (ch) {
            case 1: scanf("%d", &x); push(x); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: printf("Invalid\n");
        }
    }
}
