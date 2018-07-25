'''write a program to print
enter the number4
D
DC
DCB
DCBA'''
n=int(input("enter the number"))
for i in  range(1,n+1):
    p=n-1
    for j in range(i):
        print(chr(65+p),end='')
        p=p-1
    print()
    
