3rd CODE: 
#include <stdio.h> 
void traverse(int *arr, int n) { 
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i)); 
    printf("\n"); 
} 
void insert(int *arr, int *n, int pos, int val) { 
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1]; 
    arr[pos] = val; 
    (*n)++; 
} 
void delete(int *arr, int *n, int pos) { 
    for (int i = pos; i < *n - 1; i++) arr[i] = arr[i + 1]; 
    (*n)--; 
} 
int main() { 
    int arr[100], n, pos, val; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter elements: "); 
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]); 
    printf("\nInitial array: "); 
    traverse(arr, n); 
    printf("Enter position and value to insert: "); 
    scanf("%d %d", &pos, &val); 
    insert(arr, &n, pos, val); 
    traverse(arr, n); 
    printf("Enter position to delete: "); 
    scanf("%d", &pos); 
    delete(arr, &n, pos); 
    traverse(arr, n); 
    return 0; 
} 
