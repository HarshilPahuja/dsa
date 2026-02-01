#sort based on even digits if tie- based on value
# use dict
arr=[179,24,6,10,7,208]
sortedarr=[]
highesteventdigits=1000
highesteventdigitsind=1000
for i in range(0,len(arr)):
    strr=str(arr[i])
    count=0
    for i in range(0,len(strr)):
        digit=int(strr[i])
        if(digit%2==0):
            count+=1
    



#use dict

    