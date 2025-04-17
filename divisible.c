#include <stdio.h>

int main() {
    int n;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if the number is divisible by 5
    if (n % 5 == 0) {
        printf("The number %d is divisible by 5.\n", n);
    } else {
        printf("The number %d is NOT divisible by 5.\n", n  );
    }

    return 0;
}
