#include<stdio.h>
#include<conio.h>
void main()
{
char name[10];
int i;
clrscr();
printf("Enter any name:");
scanf("%s",&name);
//for(i=0;i<=10;i++)
for(i=0;name[i]!='\0';i++)
{
printf("%c",name[i]);
}
getch();
}
