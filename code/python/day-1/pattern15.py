'''write a program to print
enter the number4
   *
  **
 ***
****'''
n=int(input("enter the number"))
p=n
k=0
for row in range(n):
    for space in range(p,1,-1):
        print(" ",end='')
        #for star in range(row):
    for star in range(row+1):
            print("*",end='')


    print()
    p=p-1
    
    

        
