#include<stdio.h>

void rupees()
{
	int dollor,rupees;
	printf("Enter dollor:");
	scanf("%d  ",&dollor);
	rupees= 85*dollor;
	printf("rupees:%d  ",rupees);
}

void feet()
{
	int feet,inches;
	printf("Enter inches:");
	scanf("%d  ",&inches);
    feet= 12*inches;
	printf("feet:%d  ",feet);
}
 
 int main()
 {
 	rupees();
 	feet();
 }