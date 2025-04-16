#include<stdio.h>
int main()
{
	int celsius, Fehrenheit;
	printf("Enter the value of celsius:");
	scanf("%d",& celsius);
	Fehrenheit=(9/5*celsius) + 32;
	printf("Fehrenheit:%d",Fehrenheit);
}