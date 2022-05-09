#include<stdio.h>
#include<conio.h>
void main()
{
int a[2];
clrscr();

printf("enter 3 numbers");
for(i=0;i<=2;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

for(i=0;i<=2;i++)
{
printf("a[%d]=%d",i,a[i]);
}
//printf("%d\n",a[0]);
//printf("%d\n",a[1]);
//printf("%d",a[2]);
getch();
}