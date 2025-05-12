#include<stdio.h>

void feet()
{
	int feet,inches;
	printf("Enter inches:");
	scanf("%d",&inches);
    feet= 12*inches;
	printf("feet:%d",feet);
}
 
 int main()
 {
 	feet(); 	 
 }