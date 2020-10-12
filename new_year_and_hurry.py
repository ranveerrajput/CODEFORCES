n,m=map(int,input().split())
min=240-m
for i in range(1,n+1):
    min=min-(5*i)
    if(min>=0):
        continue
    else:
        i=i-1
        break
print(i)