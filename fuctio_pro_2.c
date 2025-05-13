#include<stdio.h>

int stringlength(char str[])
{
	int count =0;
	while(str[count] !='\0')
	{
		count++;
	}
	return count;
}


int main(){

	char str [100];
	
	printf("Enter any string : ");
	scanf("%s",str);
	
	int length =stringlength(str);
	printf("length is :%d\n",length);
}