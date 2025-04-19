#include<stdio.h>

int main()
{

    int a=5,b=7,c=8;
    a>b ? a>c ? printf("a is max."): printf("c is max.")
    :
  b>c ?printf("b is max."):printf("c is Max");
}