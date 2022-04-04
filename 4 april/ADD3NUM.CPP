#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,n1,n2,n3,res;
printf("Enter 3 digit number:");
scanf("%d",&num);

n1=num%10;
num=num/10;

n2=num%10;
num=num/10;

n3=num%10;

res=n1+n2+n3;
printf("Addition of 3 numbers=%d",res);

getch();
}