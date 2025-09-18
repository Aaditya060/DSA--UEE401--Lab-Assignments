#include <stdio.h>

int mylen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[100];
    gets(str);
    printf("Length = %d\n", mylen(str));
}
