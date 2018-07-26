'''program to find  factorial of number'''
number=int(input("enter the number"))
factorial=1
if(number==0 or number==1):
    print("factorial of number ",number,"is",factorial)

else:
    for i in range (1,number+1):
        factorial=factorial*i
    
    print("factorial of number ",number,"is",factorial)
        
        
    
      
