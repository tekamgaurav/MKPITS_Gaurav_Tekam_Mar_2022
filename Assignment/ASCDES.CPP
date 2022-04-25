#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&a,&b);

if(b>a)
{
printf("Ascending order.");
}
else
{
printf("Descending order.");
}

getch();
}