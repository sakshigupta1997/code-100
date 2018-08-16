/*display factor of number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int number,i;
clrscr();
printf("enter the number");
scanf("%d",&number);
printf("factor of number %d is\n",number);
for(i=1;i<=number;i++)
{
if(number%i==0)
{
printf("%d\n",i);
}
}
getch();
}