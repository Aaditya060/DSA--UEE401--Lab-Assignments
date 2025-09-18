#include <stdio.h>
#define SIZE 100

int stack[SIZE], top = -1;

void push(int x) {
    if (top == SIZE - 1) {
        printf("Overflow\n");
        return;
    }
    stack[++top] = x;
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Popped %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
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
