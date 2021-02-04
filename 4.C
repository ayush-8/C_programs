#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();

int matchsticks,user,computer;
matchsticks=21;
while(matchsticks>1)
{
printf("\nenter any number");
scanf("%d",&user);
computer=(5-user);
printf("\n%d",computer);
matchsticks=matchsticks-user-computer;
}
printf("you lost");
getch();
}