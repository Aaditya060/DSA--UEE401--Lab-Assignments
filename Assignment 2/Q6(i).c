//1st CODE:  
#include <stdio.h> 
void linearSearch(int *arr, int n, int key) { 
    int found = 0; 
    for (int i = 0; i < n; i++) { 
        if (*(arr + i) == key) { 
            printf("Element %d found at position %d\n", key, i + 1); 
            found = 1; 
            break; 
        } 
    } 
    if (!found) 
        printf("Element %d not found in array\n", key); 
} 
int main() { 
    int arr[100], n, key; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter %d elements: ", n); 
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
    printf("Enter element to search: "); 
    scanf("%d", &key); 
    linearSearch(arr, n, key); 
    return 0; 
} 
