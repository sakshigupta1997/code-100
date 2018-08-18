#include<stdio.h>
#include<conio.h>
#include<math.h>
void update(int *x,int *y);
void main()
{
int a,b;
printf("enter the two number");;
scanf("%d\n %d",&a,&b);
update(&a,&b);
getch();
}
void update(int *x,int *y)
{
int c,d;
c=*x + *y;
d=abs(*x - *y);
printf("Addition of two number is: %d\n Difference of two number is:%d",c,d);
}
