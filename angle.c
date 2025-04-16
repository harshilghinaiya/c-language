#include<stdio.h>
int main()
{
	int firstangle,secondangle,righttriangle,thirdangle;
	printf("Enter firstangle:");
	scanf("%d",&firstangle);
	printf("Enter secondangle:");
	scanf("%d",&secondangle);
	righttriangle=180;
	thirdangle=180-(firstangle+secondangle);
	printf("thirdangle:%d",thirdangle);
}