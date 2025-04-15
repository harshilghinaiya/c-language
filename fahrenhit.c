#include<stdio.h>

int main()
{
	int celsius;
	float  fahrenhit;
	printf("enter value of celsius:");
	scanf("%d",&celsius);
	
	fahrenhit=(float)celsius*33.8;
	
	printf("this is value of fahrenhit: %d",fahrenhit);
	
}