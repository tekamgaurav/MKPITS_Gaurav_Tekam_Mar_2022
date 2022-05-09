#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,ser,f=0;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}

printf("enter number:");
scanf("%d",&ser);

for(i=0;i<5;i++)
{
	if(a[i]==ser)
	{
			f=1;
	}
}
if(f==1)
{
printf("number is present");
}
else
{
printf("number is not present");
}
getch();
}