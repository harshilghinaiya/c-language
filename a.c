#include <stdio.h>

int main() {
    int n, i;
    int arr[100];         // Static array with a max size
    int *p = arr;         // Pointer to array
    int **pptr = &p;      // Chain of pointer (pointer to pointer)

    // Input array size
    printf("Enter the array's size: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &(*pptr)[i]);
    }

    // Square each element
    for(i = 0; i < n; i++) {
        (*pptr)[i] = (*pptr)[i] * (*pptr)[i];
    }

    // Print in reverse order
    printf("Reversed array elements:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d", (*pptr)[i]);
        if(i != 0)
            printf(", ");
    }

    return 0;
}
