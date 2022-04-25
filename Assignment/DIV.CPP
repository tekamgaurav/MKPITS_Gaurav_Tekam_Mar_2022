#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,res;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&a,&b);

if(b==0)
{
printf("Division is not possible.");
}
else
{
res=a/b;
printf("%d",res);
}
getch();
}