#include <stdio.h> 
int main() { 
    int arr[100], n, i, pos, val; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    printf("Enter %d elements: ", n); 
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
    printf("\nArray elements: "); 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    printf("\nEnter position to insert (0 to %d): ", n); 
    scanf("%d", &pos); 
    printf("Enter value: "); 
    scanf("%d", &val); 
    for (i = n; i > pos; i--) 
        arr[i] = arr[i - 1]; 
    arr[pos] = val; 
    n++; 
    printf("Array after insertion: "); 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    printf("\nEnter position to delete (0 to %d): ", n - 1); 
    scanf("%d", &pos); 
    for (i = pos; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    n--; 
    printf("Array after deletion: "); 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    return 0; 
} 