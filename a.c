#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the array's size: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n
    int *ptr = arr; // Pointer to the array

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("Enter array elements a[%d] = ", i);
        scanf("%d", ptr + i); // Use pointer arithmetic to store values
    }

    // Output squared elements in reverse order
    printf("Reversed array elements:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i))); // Square and print
    }
    
    return 0;
}
