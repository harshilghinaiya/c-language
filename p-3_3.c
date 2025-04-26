#include<stdio.h>

int main()
{
	int number ,fristdigit,lastdigit,sum;
	printf("Enter any number:");
	scanf("%d",&number);
	
	lastdigit=number%10;
	
	fristdigit=number;
	while(fristdigit>=10){
		fristdigit/=10;
	}
	  sum= fristdigit + lastdigit ;
	 printf ("sum of  frist and last digit:%d\n",sum);
	

}

//out put
//enter number :123
//the sum of the frist and last digit of 123 is:4