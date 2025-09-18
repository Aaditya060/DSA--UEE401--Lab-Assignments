#include <stdio.h> 
int main() { 
    int arr[100], n, i, j, temp; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter elements:\n"); 
    for (i = 0; i < n; i++) { 
    } 
        scanf("%d", &arr[i]); 
    // Sort array in ascending order (simple bubble sort) 
    for (i = 0; i < n-1; i++) { 
        for (j = i+1; j < n; j++) { 
            if (arr[i] > arr[j]) { 
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
    printf("Second Minimum = %d\n", arr[1]); 
    printf("Second Maximum = %d\n", arr[n-2]); 
    return 0; 
} 