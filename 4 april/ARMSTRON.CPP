#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,n1,n2,n3,res;
printf("Enter number:");
scanf("%d",&num);

n1=num%10;
num=num/10;

n2=num%10;
num=num/10;

n3=num%10;

res=n1*n1*n1+n2*n2*n2+n3*n3*n3;
printf("armstrong number =%d",res);

getch();
}