arr=[3,2,5,6,2,4,2,1]

minimum=sum(arr)
lowestind=len(arr)
highestind=0
for i in range(0,len(arr)):
    if arr[i]<=minimum:
        minimum=arr[i]
       
print(minimum)
# print(lowestind)
# print(highestind)
    