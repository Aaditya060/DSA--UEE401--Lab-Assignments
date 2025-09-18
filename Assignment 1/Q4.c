#include <stdio.h>
#include <math.h>

float square(float a) {
    return a * a; 
}

float rectangle(float l, float b) {
    return l * b;
}

float circle(float r) {
    return 3.14 * r * r;
}

int main() {
    int ch;
    float a, b, r;
    while (1) {
        printf("\n 1. Square\n 2. Rectangle\n 3. Circle\n 4. Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 4) break;
        switch (ch) {
            case 1:
                printf("Side: "); scanf("%f", &a); printf("Area = %.2f\n", square(a));
                break;
            case 2:
                printf("Length Breadth: "); scanf("%f%f", &a, &b); printf("Area = %.2f\n", rectangle(a, b)); 
                break;
            case 3: 
                printf("Radius: "); scanf("%f", &r); printf("Area = %.2f\n", circle(r)); 
                break;
            default: printf("Invalid\n");
        }
    }
}
