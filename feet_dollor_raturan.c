#include<stdio.h>
int dollor()
{
	int dollor,rupees;
	printf("Enter dollor:");
	scanf("%d",&dollor);
	rupees= 85*dollor;
	return rupees;
	
}

int feet()
{
	int feet,inches;
	printf("Enter inches:");
	scanf("%d",&inches);
    feet= 12*inches;
	return feet;
}

int main()
{
	int  ans, answer;
	printf("Dollor conerter:\n");
	ans=dollor();
	printf("Ans:%d\n",ans);
	printf("feet conerter:\n");
	answer=feet();
	printf("Ans:%d",answer);
}