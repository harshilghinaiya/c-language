#include<stdio.h>
int main()
{
	int maths, science, english, total;
	
	float per;
	
	printf("enter marks of maths:");
	scanf("%d",&maths);
	
	printf("enter marks of science:");
	scanf("%d",&science);
	
	printf("enter marks of english:");
	scanf("%d",&english);
	
	total=maths + science + english;
	printf("total marks : %d", total);
	per=((float)total*100)/300;
	printf("\n7
	per is :%f", per);
	
}