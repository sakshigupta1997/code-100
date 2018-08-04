'''program to find a number is palindrome or not'''
number=int(input("enter a number"))
temp=number
rem=0
c=0
while  number>0 :
    rem = int(number%10)
    number=int(number/10)  
    c =int((c*10)+rem)
    
        
if ( c==temp):
    
        print("number",temp,"is palindrome number")
        
else:
        
        print("number",temp,"is not palindrome")
    
