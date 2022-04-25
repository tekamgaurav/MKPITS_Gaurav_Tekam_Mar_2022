#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,n1,n2,n3,res;
printf("Enter 3 digit number");
scanf("%d",&num);

n1=num%10;
num=num/10;

n2=num%10;
num=num/10;
n3=num%10;

if(n1==n3)
printf("it is palindrome");
else
printf("it is not");

getch();
}
