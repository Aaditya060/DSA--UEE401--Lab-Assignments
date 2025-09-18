CODE: 
#include <stdio.h> 
int main() { 
    int arr[200], n1, n2, n, i, j, temp; 
    printf("Enter size of first array: "); 
    scanf("%d", &n1); 
    printf("Enter elements: "); 
    for (i = 0; i < n1; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("Enter size of second array: "); 
    scanf("%d", &n2); 
    printf("Enter elements: "); 
    for (i = 0; i < n2; i++) { 
        scanf("%d", &arr[n1 + i]); 
    } 
    n = n1 + n2;   
    // sort the merged array (bubble sort) 
    for (i = 0; i < n - 1; i++) { 
        for (j = i + 1; j < n; j++) { 
            if (arr[i] > arr[j]) { 
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
    printf("Merged Sorted Array: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    return 0; 
} 