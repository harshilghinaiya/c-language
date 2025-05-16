#include <stdio.h>

int main() {
    int n, i;
    int arr[100];        
    int *p = arr;         
    int **pp = &p;      
    

    printf("Enter the array's size: ");
    scanf("%d", &n);

  
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &(*pp)[i]);
    }

  
    for(i = 0; i < n; i++) {
        (*pp)[i] = (*pp)[i] * (*pp)[i];
    }

  
    printf("Reversed array elements:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d", (*pp)[i]);
        if(i != 0)
            printf(", ");
    }
}
