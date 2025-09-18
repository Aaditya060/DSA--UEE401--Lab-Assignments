#include <stdio.h>

int main() {
    char *names[] = {
        "Ram",
        "Shyam",
        "AlexanderTheGreat"
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
}
