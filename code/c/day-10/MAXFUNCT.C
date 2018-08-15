#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int number1,number2,number3,number4,f,g,h;
printf("enter the four number:");
scanf("%d\n %d\n %d\n %d",&number1,&number2,&number3,&number4);
f=max(number1,number2);
g=max(number3,number4);
h=max(f,g);
printf("maximum number is:%d",h);
getch();
}
