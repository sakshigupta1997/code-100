
'''write a program to print 
enter the number3
CBA
CB
C'''
n=int(input("enter the number"))
p=0
for row in  range(1,n+1):
    
    for j in range(n-1,p-1,-1):
        print(chr(65+j),end='')
        
    print()
    p=p+1
