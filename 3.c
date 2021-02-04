#include<stdio.h>

void main()
{
    int  i,a;
    printf("enter any number");
    scanf("%d",&a);
    for(i=(a-1);i>1;i--)
    {
        if(a%i==0)
        printf("it is a prime number");

    }

}