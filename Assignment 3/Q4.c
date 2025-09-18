#include <stdio.h>

int mycmp(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];
}

int main() {
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    int r = mycmp(s1, s2);
    if (r == 0) {
        printf("Equal\n");
    } else if (r > 0) {
        printf("First is greater\n");
    } else {
        printf("Second is greater\n");
    }
}
