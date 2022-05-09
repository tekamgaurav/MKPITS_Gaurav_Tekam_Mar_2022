#include<stdio.h>
#include<conio.h>
void main()
{
int n,back,num,rev=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
back=n;
for(;n>0;)
{
num=n%10;
rev=rev*10+num;
n=n/10;
}
if(back==rev)
{
printf("It is palindrome");
}
else
{
printf("it is not");
}
getch();
}