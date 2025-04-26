#include<stdio.h>

int main()

{
	char word ='a';
	
	do{
		printf("%c  ",word);
		word +=3;
	}while(word<='z');
}
//out put : a e i m q  u y