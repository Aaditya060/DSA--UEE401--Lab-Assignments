//2nd CODE: 
#include <stdio.h> 
void secondMinMax(int *arr, int n) { 
    int i, j, temp; 
    
    for (i = 0; i < n - 1; i++) { 
        for (j = i + 1; j < n; j++) { 
            if (*(arr + i) > *(arr + j)) { 
                temp = *(arr + i); 
                *(arr + i) = *(arr + j); 
                *(arr + j) = temp; 
            } 
        } 
    } 
    printf("Second Minimum = %d\n", *(arr + 1)); 
    printf("Second Maximum = %d\n", *(arr + n - 2)); 
} 
int main() { 
    int arr[100], n; 
    printf("Enter size of array: "); 
    scanf("%d", &n); 
    printf("Enter %d elements: ", n); 
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
    secondMinMax(arr, n); 
    return 0; 
}