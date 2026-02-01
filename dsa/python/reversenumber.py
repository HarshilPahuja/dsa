n=int(input("enter a number: "))
stringg=""
while(n>0):
    extracteddigit=n%10
    stringg+=str(extracteddigit)
    n=int(n/10)


print(int(stringg))

#reversing a number, and also removing leading 0s


# # https://leetcode.com/problems/reverse-integer/
# class Solution:
#     def reverse(self, x: int) -> int:
#         revnum=0
#         flag=0 #postive
        
#         if(x<0):
#             n=(-1)*x
#             flag=1 #negative
#         else:
#             n=x

#         while(n>0):
#             extracteddigit=n%10
#             revnum=(revnum*10)+extracteddigit
#             n=int(n/10)

        
#         if flag==1:
#             revnum=revnum*(-1)
#             if( (revnum>((2**31)-1))or (revnum<(-2**31)) ):
#                 return 0
#             return revnum
#         else:
#             if( (revnum>((2**31)-1))or (revnum<(-2**31)) ):
#                 return 0
#             return revnum