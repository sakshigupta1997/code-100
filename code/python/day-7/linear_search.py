
number=int(input("enter the numbers"))
y=[]
flag=0
for i in range(0,number):
    y.append(i)
print(y)
item=int(input("enter the item you want to insert"))
for i in range(0,number):
    if(item==y.index(i)):
        flag=1
        break
    else:
        flag=0
if(flag==1):
    print("item ",item,"found at position",i)
else:
    print("item not found")
