#include<stdio.h>
#include<conio.h>
void main()
{
float pi=3.14,area;
int radius;
clrscr();
printf("Enter radius \n");
scanf("%d",&radius);
area=pi*radius*radius;
printf("%f",area);
getch();
}