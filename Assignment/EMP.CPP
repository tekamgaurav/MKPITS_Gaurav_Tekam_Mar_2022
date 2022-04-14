#include<stdio.h>
#include<conio.h>
void main()
{
int empid,twh,amt;
float sal;
clrscr();
printf("\n Enter Employee Id:");
scanf("%d",&empid);
printf("\n Enter Total hour work in a month:");
scanf("%d",&twh);
printf("\n Amount per hour:");
scanf("%d",&amt);

sal=twh*amt;

printf("\n Employee Id:%d",empid);
printf("\n Salary:%f",sal);

getch();
}
