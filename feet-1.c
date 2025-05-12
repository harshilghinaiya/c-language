#include <stdio.h>

int main() 
{
    float feet , inches;  

    printf("Enter the length in feet: ");
    scanf("%f", &feet);

    feet = inches * 12;

    printf("%.2f Feet = %.2f inches\n", feet , inches);


}