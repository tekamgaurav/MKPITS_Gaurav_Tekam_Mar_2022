#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
clrscr();
printf("enter valur of num:");
scanf("%d",&num);
r=num%4;
if(r==0)
{
printf("num div ny 4");
}
if(r!=0)
{
printf("num is not div by 4");
}
getch();
}