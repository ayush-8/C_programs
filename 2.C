#include<stdio.h>
void main()
{
 int c,a,i;
printf("enter any number");
scanf("%D",&a);
for(i=1;i<=10;i++)
{  c=(a*i);
 printf("\n d=(%d*%d)",c,a,i);
}
getch();
}
