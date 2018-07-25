'''write a program to print
enter the number4
A
AB
ABC
ABCD
where n is the number of rows'''
n=int(input("enter the number"))
for i in  range(1,n+1):
    for j in range(i):
        print(chr(65+j),end='')
    print()        
