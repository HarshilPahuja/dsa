
# (A+(B-C)^D/E - F*G)%M


def binpow(a,b):
    MOD=1e9+7
    if b < 0:
        raise ValueError("binpow does not support negative powers")
    if b==0:
        return 1
    elif b%2!=0:
        return (a*binpow(a,b-1))%MOD
    else:
        temp=binpow(a,b//2)%MOD
        return (temp*temp)%MOD
    

def inverse( e,  m):
    result=binpow(e,m-2)
    return result

A=int(input("enter A"))
B=int(input("enter B"))
C=int(input("enter C"))
D=int(input("enter D"))
E=int(input("enter E"))
F=int(input("enter F"))
G=int(input("enter G"))

val1=A+binpow((B-C),D)

# #without mod
# def binpow(a, b):
#     if b < 0:
#         raise ValueError("binpow does not support negative powers")
    
#     if b == 0:
#         return 1
    
#     if b % 2 == 1:          # odd
#         return a * binpow(a, b - 1)
#     else:                   # even
#         temp = binpow(a, b // 2)
#         return temp * temp
