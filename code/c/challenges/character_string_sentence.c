/*Print three lines of output. The first line prints the character, ch. 
The second line prints the string,s . 
The third line prints the sentence,sen*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,s[50],sen[100];
    scanf("%c",&ch);
    
    scanf("%s",s);
    
    
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    
    printf("%s",sen);
       
    return 0;
} .