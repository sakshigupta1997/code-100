#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,a[50],m,n,b[50],k,p,q,c[50];
clrscr();
printf("enter the two number");
scanf("%d%d",&m,&n);
j=0;
printf("factor of number %d are",m);
for(i=1;i<=m;i++)
{
if(m%i==0)
{
a[j]=i;
printf("\t%d",a[j]);
j++;
}

}

printf(" \n");
k=0;
printf("factor of number %d are",n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
b[k]=i;
printf("\t%d",b[k]);
k++;
}
}
printf("\n");
q=0;
if(j>=k)
{
for(p=0;p<k;p++)
{
for(i=0;i<j;i++)
{
if(a[p]==b[i])
{
c[q]=a[p];
q++;
}
}
}
}
else

{
for(p=0;p<j;p++)
{
for(i=0;i<k;i++)
{
if(a[p]==b[i])
{
c[q]=a[p];
q++;
}
}
}
}
printf("gcd(%d,%d) = %d",m,n,c[q-1]);
getch();
}
