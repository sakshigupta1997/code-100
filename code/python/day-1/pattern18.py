'''program to pattern of diamond but without taking an input from user
using five loop
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *

        '''
   
p=6
m=5
y=0
for i in range(0,12):
    if(i<=5):
        
        for j in range(p,1,-1):
            print(" ",end='')
        for k in range(2*i+1):
            print("*",end='')
    if(i>5):
        for j in range(y):
            print(" ",end='')
        y=y+1
        for k in range(2*m+1):
            print("*",end='')
        m=m-1
    print()
    p=p-1
    
    
    
