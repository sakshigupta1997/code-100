n=int(input("enter a number"))
for i in range(n):
    for x in range(n,-1,-1):
        print(chr(65+x),end='')
    print()
