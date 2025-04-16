#include<stdio.h>
int main()
{
	int basesalary, HRA, DA, TA;
	printf("Enter your basesalary:");
	scanf("%d",& basesalary);
	
	HRA=(10*100)/basesalary;
	
	DA=(5*100)/basesalary;
	
	TA=(8*100)/basesalary;

	printf("\ntotal salary:%d",basesalary+HRA+DA+TA);
	
}