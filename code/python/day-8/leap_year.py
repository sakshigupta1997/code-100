year=int(input("enter a year"))
if(year%400!=0):
    if(year%100==0 or  year%4!=0):
        print("Not leap year")
    else:
        print("leap year")
else:
    print("leap year")
                                                                                
