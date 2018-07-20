n=int(input("enter a number"))

for i in range(n):
    p=n
    for j in range(n+1):
        print(chr(65+p),end=' ')
        p=p-1
    print()
    
