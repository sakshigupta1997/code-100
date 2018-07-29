'''program to pattern of diamond but without taking an input from user
      *
     ***
    *****
   *******
  *********
 ***********
*************
*************
 ***********
  *********
   *******
    *****
     ***
      *    '''
p=6
for i in range(0,7):
    for j in range(p,0,-1):
        print(" ",end='')
    for k in range(2*i+1):
        print("*",end='')
    print()
    p=p-1

m=6
for i in range(0,7):
    for j in range(i):
        print(" ",end='')
    for k in range(2*m+1):
        print("*",end='')
    #for k in range(    
    print()
    m=m-1
   # for k in range(n//2,1,-1    
   
