''' write a program to print
ABCD
EFGH
IJKL
MNOP
QRST
UVWX
YZ'''
count=0
for j in range(0,26):
        if(count!=3):
            print(chr(65+j),end='')
            count=count+1
        else:
           print(chr(65+j),end='')
           print()
           count=0
            



      
