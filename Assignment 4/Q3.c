#include <stdio.h>
#include <ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
int prec(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

int main() {
    char in[SIZE], out[SIZE];
    int i = 0, k = 0;
    scanf("%s", in);
    while (in[i] != '\0') {
        if (isalnum(in[i])) out[k++] = in[i];
        else if (in[i] == '(') push(in[i]);
        else if (in[i] == ')') {
            while (top != -1 && stack[top] != '(') out[k++] = pop();
            pop();
        } else {
            while (top != -1 && prec(stack[top]) >= prec(in[i]))
                out[k++] = pop();
            push(in[i]);
        }
        i++;
    }
    while (top != -1) out[k++] = pop();
    out[k] = '\0';
    printf("%s\n", out);
}
