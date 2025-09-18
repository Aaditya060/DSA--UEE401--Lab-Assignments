#include <stdio.h> 
int main() { 
    int arr[50], n, i, key; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter %d elements:\n", n); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
    printf("Enter number to search: "); 
    scanf("%d", &key); 
    for (i = 0; i < n; i++) { 
        if (arr[i] == key) { 
            printf("%d is present in the array.\n", key); 
            return 0;   
        } 
    } 
    printf("%d is not present in the array.\n", key); 
    return 0; 
}