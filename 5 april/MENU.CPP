#include<stdio.h>
#include<conio.h>
void main()
{
int choice,num1,num2,res;
clrscr();
printf("\n Press 1 for Addition:");
printf("\n Press 2 for Sunbtraction:");
printf("\n Press 3 for Multiplication:");
printf("\n Press 4 for Division:");
printf("\n Enter your choice:");
scanf("%d",&choice);

if(choice==1)
{
printf("Enter number:");
scanf("%d%d",&num1,&num2);
res=num1+num2;
printf("Addition: %d",res);
}
else if(choice==2)
{
printf("Enter number:");
scanf("%d%d",&num1,&num2);
res=num1-num2;
printf("Substraction: %d",res);
}
else if(choice==3)
{
printf("Enter number:");
scanf("%d%d",&num1,&num2);
res=num1*num2;
printf("Multiplication:%d",res);
}
else if(choice==4)
{
printf("Enter number:");
scanf("%d%d",&num1,&num2);
res=num1/num2;
printf("Division:%d",res);
}
else
{
printf("\n Invalid choice");
}
getch();
}