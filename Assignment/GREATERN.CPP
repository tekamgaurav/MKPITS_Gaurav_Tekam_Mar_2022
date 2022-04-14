#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3;
clrscr();
printf("Enter the numbers:");
scanf("%d%d%d",&n1,&n2,&n3);

if(n1>n2 && n1>n3)
{
printf("Number 1 is greater:%d",n1);
}
else if(n2>n1 && n2>n3)
{
printf("Number 2 is greater:%d",n2);
}
else
{
printf("Number 3 is greater:%d",n3);
}
getch();
}