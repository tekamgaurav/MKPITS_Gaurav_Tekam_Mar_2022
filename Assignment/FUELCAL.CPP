#include<stdio.h>
#include<conio.h>
void main()
{
int dist;
float fuel,total;
clrscr();
printf("\n Enter distance in km:");
scanf("%d",&dist);
printf("\n Enter fuel spent in liters:");
scanf("%f",&fuel);
total=dist/fuel;
printf("\n Average consumption:%f",total);
getch();
}

