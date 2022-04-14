#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,pow=1;
clrscr();
printf("enter x and y value:");
scanf("%d%d",&x,&y);
i=1;
while(i<=y)
{
pow=pow*x;
i++;
}
printf("power is:%d",pow);
getch();
}