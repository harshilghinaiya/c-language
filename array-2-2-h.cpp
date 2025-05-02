#include<stdio.h>

int main()
{
	int n;
	
	printf("enter array size : ");
	scanf("%d",&n);

	int arr[n]; 
	
	for(int  i=0; i<n; i++)
	{
		printf("Enter arry[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int esum,osum;
	
	for (int i=0;i<n;i++)
	if(arr[i]%2==0){
		esum+= arr[i];
		
	}
	else{
		osum+=arr[i];
	}
	{
		printf("total even number sum is:%d",esum);
		printf("\ntotal odd number sum is:%d",osum);
	}
}