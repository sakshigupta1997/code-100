'''write a program to print
enter the number4
####
###
##
#
'''
n=int(input("enter the number"))
p=n
for i in  range(1,n+1):
    for j in range(p):
        print("#",end='')
        
    print()
    p=p-1
