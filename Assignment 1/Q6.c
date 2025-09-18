#include <stdio.h>

int main() {
    int x, y, i, j;
    printf("Enter number for Table start: ");
    scanf("%d", &x);
    printf("Enter number for Table Stop: ");
    scanf("%d", &y);
    for (i = x; i <= y; i++) {
        printf("\nTable of %d:\n", i);
        for (j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}
