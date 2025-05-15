#include<stdio.h>

int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter the value of x:");
	scanf("%d",&a);
	printf("Enter the value of y:");
	scanf("%d",&b);
	
	printf("Before swapping:\nx:%d\ny:%d\n",a,b);
	printf("\n");
	printf("After swapping:\nx:%d\ny:%d\n",*q,*p);
}