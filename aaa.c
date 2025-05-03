#include<stdio.h>
int main()
{
	char grade;
	int maths[5], science[5], english[5], total,i;
	float per;
	
	for(int i=0;i<5;i++){
	
	printf("enter marks of maths:");
	scanf("%d",&maths[i]);
}
printf("\n\n");

	for(int i=0;i<5;i++)
	{
	printf("enter marks of science:");
	scanf("%d",&science[i]);
}
printf("\n\n");


	for(int i=0;i<5;i++)
	{
	printf("enter marks of english:");
	scanf("%d",&english[i]);
	}
	
	printf("\n\n");
	
 
 printf("maths\tscience\tenglish\ttotal\tpersentage\tGrade");
 
 		for(int i=0;i<5;i++){
	total=maths[i] + science[i] + english[i];
	
	per=(float)total/3;
	
 if(per>=90){
	printf(" A");
	}else if(per<90 && per>=75){
	printf(" B");
	}else if(per<75 && per>=55){
	printf(" C ");
	}else if(per<55 && per>=35){
	printf(" D ");
	}else{
	printf(" F ");
	}
		
	printf("\n%d\t%d\t%d\t %d\t%.2f\t", maths[i],science[i],english[i],total, per,grade);
		 }
}