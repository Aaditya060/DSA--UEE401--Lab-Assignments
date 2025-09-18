#include <stdio.h>

int main() {
    char names[3][10] = {
        "Ram",
        "Shyam",
        "AlexanderTheGreat"  
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
}
