'''program to find a number is palindrome or not'''
number=int(input("enter a number"))
rev=0
copy_of_number=number
while number!=0 :
     remainder=int(number%10)
     rev=rev*10+remainder
     number=int(number/10)
          
if(rev==copy_of_number):
    print("number",copy_of_number,"is a palindrome number")
else:
    print("number",copy_of_number,"is not palindrome number")
