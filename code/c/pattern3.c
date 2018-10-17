
/*   full pyramid*/
     *
    ***
   *****
  *******
 *********
#include <stdio.h>

int main()
{
    int i,j,k=5,m,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {m=0;
        for(j=k;j>0;j--)
        {
            printf(" ");
        }
        k=k-1;
        
        while(m!=2*i+1)
        {
       printf("*");
       m=m+1;
        }
        printf("\n");
    }
    

    return 0;
}
