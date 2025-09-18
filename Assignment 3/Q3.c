#include <stdio.h>

void mycat(char a[], char b[]) {
    int i = 0, j = 0;
    while (a[i] != '\0') {
        i++;
    }
    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
}

int main() {
    char s1[200], s2[100];
    gets(s1);
    gets(s2);
    mycat(s1, s2);
    printf("Concatenated = %s\n", s1);
}
