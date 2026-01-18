#brute force approach
# def gcd(x,y):
#     # x=9 y=12, 1-minimum mei jo jo bhi usko divide krte and unka highest
#     gcdd=0
#     for i in range(1,min(x,y)+1):
        
#         if x%i==0 and y%i==0 and i>=gcdd:
#             gcdd=i

#     print(gcdd)

# gcd(9,12)



#better  approach
# def gcd(x,y):
#     # x=9 y=12, 1-minimum mei jo jo bhi usko divide krte and unka highest
    
#     gcdd=1
#     for i in range(min(x,y)+1,1,-1):
        
#         if x%i==0 and y%i==0:
            
#             gcdd=i
#             break
    

#     print(gcdd)

# gcd(9,12)




#optimal approach-euclidean algorithm

def gcd(x,y):
    if x==0 and y==0:
        return 1
    if x==0:
        return y
    if y==0:
        return x
    
    elif x>y:
        return gcd(x-y,y)
    
    else:
        return gcd(x,y-x)
    
ans=gcd(9,12)
print(ans)
