#include<stdio.h>
#include<conio.h>
void main()
{
int choice,num1,res;
clrscr();
printf("\n Press 1 for Square:");
printf("\n Press 2 for Cube:");

printf("\n Enter your choice:");
scanf("%d",&choice);

if(choice==1)
{
printf("Enter number:");
scanf("%d",&num1);
res=num1*num1;
printf("Square is: %d",res);
}
else if(choice==2)
{
printf("Enter number:");
scanf("%d",&num1);
res=num1*num1*num1;
printf("Cube is: %d",res);
}
else
{
printf("\n Invalid choice");
}
getch();
}