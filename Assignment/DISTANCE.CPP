#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,dist;
clrscr();
printf("Enter value for x1 and y1:");
scanf("%f%f",&x1,&y1);
printf("Enter value for x2 and y2:");
scanf("%f%f",&x2,&y2);
dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("Distance is:%f",dist);
getch();
}