#include<stdio.h>

int main()
{
 int n,i=7;
 
 printf("enter any number:");
 scanf("%d",&n);
 
  
do{
	if(i% 7==0){
	
	printf("%d\n",i);
 }
	i++;
}while(i<n);
}
