#include <stdio.h> 
int firstBetween(int n_min, int n_max) { 
    if (n_min + 1 < n_max) { 
        return n_min + 1; 
    } else { 
        return -1; 
    } 
} 
int main() { 
    int min, max, result; 
   printf("Enter n_min: "); 
    scanf("%d", &min); 
    printf("Enter n_max: "); 
    scanf("%d", &max); 
    result = firstBetween(min, max); 
    if (result == -1) { 
        printf("No integer exists between %d and %d\n", min, max); 
    } else { 
        printf("First integer between %d and %d is: %d\n", min, max, result); 
    } 
    return 0; 
} 