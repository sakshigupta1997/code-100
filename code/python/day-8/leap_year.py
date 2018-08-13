n=int(input("enter a year"))
if(n%400!=0):
    if(n%100==0 or  n%4!=0):
        print("Not leap year")
    else:
        print("leap year")
else:
    print("leap year")
                                                                                
