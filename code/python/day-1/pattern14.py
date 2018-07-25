'''write a program to print
enter the number4
####
#  #
#  #
####'''
n=int(input("enter the number"))
print("#"*n)
for row in range(n-2):
    for column in range( n):
                    
        if (column==0 or column==n-1):
            print ("#",end='')
        else:
            print(" ",end='')
        
    print()
print("#"*n)
       
