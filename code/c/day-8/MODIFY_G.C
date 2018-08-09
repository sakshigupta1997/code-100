#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,m,n,mrcf,c;
printf("enter the two number" );
scanf("%d%d",&m,&n);
c=min(m,n);
for(i=c;i>0;i--)
{
if(m%i==0 && n%i==0)
mrcf=i;
}
printf("%d",mrcf);
getch();
}

