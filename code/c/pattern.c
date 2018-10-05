/*print the half pyramid using*  */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,number;
clrscr();
printf("enter the number");
scanf("%d",&number);
for(i=0;i<number;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf();
}
getch();
}
