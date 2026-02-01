#brute force- for loop
def fib(n):
    arr=[0,1]
    for i in range(2,n):
        temp=arr[i-1]+arr[i-2]
        arr.append(temp)






#better approach space complexity-> for finding nth item u just need n-1 + n-2 not a whole array
first_item=0
second_item=1
for i in range(2,6):
    temp=first_item+second_item
    first_item=second_item
    second_item=temp
    

print(second_item) # for finding 5th fibonacii position item- 0 1 1 2 3 5
#o/p-5 


#using recursion optimal->
class Solution:
    def fib(self, n: int) -> int:
        if n==0:
            return 0
        if n==1:
            return 1
        else:
            return self.fib(n-1)+self.fib(n-2)


#just see n or n+1 
