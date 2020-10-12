n=int(input())
a=list(map(int,input().split()))
a.append(-1)
k=1 
pre=0
ans=0
for i in range(1,n+1):
    if(a[i]==a[i-1]):
        k=k+1 
    else:
        ans=max(ans,min(k,pre))
        pre=k
        k=1 
print(ans*2)

        