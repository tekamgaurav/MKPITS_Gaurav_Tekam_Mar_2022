#include<stdio.h>
#include<conio.h>
void main()
{
int seconds,min,hr,sec;
clrscr();
printf("Enter seconds:");
scanf("%d",&seconds);
hr=seconds/3600;
min=(seconds-hr*3600)/60;
sec=seconds-hr*3600-min*60;

printf("\n %d Hour",hr);
printf("\n %d Minutes",min);
printf("\n %d seconds",sec);


getch();
}
