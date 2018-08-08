number=int(input("enter the number"))
y=[]
flag=0
for i in range(0,number):
    y.append(i)
print(y)
beg=0
end=number-1
item=int(input("enter the item you want to searched"))
while(beg<=end):
    
    mid=int((beg+end)/2)
    if(item==y[mid]):
        flag=1
        break
    else:
        if(item<y[mid]):
            end=mid-1
        else:
            beg=mid+1
if(flag==0):
    print("item not found")
else:
    print("item found",item,"at",mid)
