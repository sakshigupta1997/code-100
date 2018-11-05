/*program to make pattern of number 
    1
   23
  345
 5678  */
#include <stdio.h>

int main()
{
    int i,j,k,m=3;
    for(i=0;i<4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        if(j==0)
        printf("1");
        else{
    
        m--;
        for(k=0;k<i+1;k++)
        {
            printf("%d",m);
            m++;
        }
}        printf("\n");
        
        
    }
}
