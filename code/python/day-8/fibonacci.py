a=0
b=1
c=0
n=int(input("enter the total  number in the series:"))
counter=0
print("fibonacci series of",n,"number are")
print(a,b,end=" ")
while counter!=n-2:
    c=a+b
    print(c,end=" ")
    a=b
    b=c
    counter=counter+1
    
    
