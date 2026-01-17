n=int(input("enter a number: "))
stringg=""
while(n>0):
    extracteddigit=n%10
    stringg+=str(extracteddigit)
    n=int(n/10)


print(int(stringg))

#reversing a number, and also removing leading 0s