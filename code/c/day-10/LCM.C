/*program to find the lcm of two number*/
#include<stdio.h>
#include<conio.h> 
void main()
{
int number1,number2,i=2,p=1;
clrscr();   
printf("enter the two number");
scanf("%d%d",&number1,&number2);
while(number1!=1||number2!=1)
{

while(number1%i==0||number2%i==0)
{
if(number1%i==0&&number2%i==0)
{
number1=number1/i;
number2=number2/i;
}
else if(number1%i==0)
{
number1=number1/i;
}
else
{
number2=number2/i;

}
p=p*i;
}
i++;
}
printf("lcm of two number is %d",p);
getch();
}
