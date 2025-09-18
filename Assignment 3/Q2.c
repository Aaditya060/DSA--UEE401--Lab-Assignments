#include <stdio.h>

void mycopy(char d[], char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

int main() {
    char s[100], d[100];
    gets(s);
    mycopy(d, s);
    printf("Copied = %s\n", d);
}
