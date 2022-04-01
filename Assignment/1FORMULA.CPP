#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res;
clrscr();
printf("Enter value of a and b:");
scanf("%d%d",&a,&b);
res=a*a+2*a*b+b*b;
printf("%d",res);
getch();
}