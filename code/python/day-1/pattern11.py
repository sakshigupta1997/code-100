'''write a program to print
enter the number5
ABCDE
ABCD
ABC
AB
A'''
n=int(input("enter the number"))

for row in  range(1,n+1):
    for j in range(n):
        print(chr(65+j),end='')
        
    print()
    n=n-1
