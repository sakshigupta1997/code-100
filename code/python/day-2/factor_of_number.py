'''Program to find the factor of number'''
number=int(input("Enter a number"))
print("Factor of number",number,"(",end='')
for i in range(1,number+1):
    if(number%i==0):
        print(i, end='')
        if(i<number):
            print(",",end='')
    if(i==number):
        print(")")
