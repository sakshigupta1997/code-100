#include<stdio.h>
#include<conio.h>
void main()
{
int i,count=0,element=0,n,j;
char arr[50];//check it
printf("enter the total no.of element in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
while(element<=9)
{
for(i=0;i<n;i++)
{
if(arr[i]==element)
{
count++;
}
}
printf("Frequency of element %d in array=%d\n",element,count);
element++;
count=0;
}
getch();
}
