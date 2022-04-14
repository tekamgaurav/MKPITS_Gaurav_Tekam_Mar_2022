#include<stdio.h>
#include<conio.h>
void main()
{
int day,year,week,month;
clrscr();
printf("Enter days:");
scanf("%d",&day);
year=day/365;
week=day/7;
month=day/30;
printf("\n Year:%d",year);
printf("\n Weeks:%d",week);
printf("\n Months:%d",month);
getch();
}
