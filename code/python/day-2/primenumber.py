'''Program to find that the number is prime or not'''
number=int(input("enter the number"))
flag=0
for i in range(2,number):
    
    if(number%i==0):  
        flag=1
        break
if(flag==0):
    print("number",number,"is prime")
else:
    print("number",number,"is  not prime")
              
