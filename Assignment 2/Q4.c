#include <stdio.h> 
int main() { 
    int arr1[100], arr2[100], result[100]; 
    int n, i, choice; 
    printf("Enter size of arrays: "); 
    scanf("%d", &n); 
    printf("Enter elements of first array:\n"); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr1[i]); 
    } 
    printf("Enter elements of second array:\n"); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr2[i]); 
    } 
    do { 
        printf("\nMENU:\n"); 
        printf("1. Addition\n"); 
        printf("2. Subtraction\n"); 
        printf("3. Multiplication\n"); 
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        switch (choice) { 
            case 1: // Addition 
                printf("Result (Addition): "); 
                for (i = 0; i < n; i++) { 
                    result[i] = arr1[i] + arr2[i]; 
                    printf("%d ", result[i]); 
                } 
                printf("\n"); 
                break; 
            case 2: // Subtraction 
                printf("Result (Subtraction): "); 
                for (i = 0; i < n; i++) { 
                    result[i] = arr1[i] - arr2[i]; 
                    printf("%d ", result[i]); 
                } 
                printf("\n"); 
                break; 
            case 3: // Multiplication 
                printf("Result (Multiplication): "); 
                for (i = 0; i < n; i++) { 
                    result[i] = arr1[i] * arr2[i]; 
                    printf("%d ", result[i]); 
                } 
                printf("\n"); 
                break; 
            case 4: 
                printf("Exiting program.\n"); 
                break; 
            default: 
                printf("Invalid choice! Try again.\n"); 
        } 
    } while (choice != 4); 
    return 0; 
} 
