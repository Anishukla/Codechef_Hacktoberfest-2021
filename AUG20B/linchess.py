def linear_chess(k,p):
    count=c=1000000000
    re=0
    for i in range(len(p)):
        if k%p[i]==0:
            c=k//p[i]
           
        if count>c:
            count=c
            re=p[i]
    if re>0:
        return re
    else:
        return -1
    
    
    
    
        
   


t=int(input())
while t>=1:
    n,k=input().split()
    n=int(n)
    k=int(k)
    p= list(map(int,input().strip().split()))[:n]
    
    print(linear_chess(k,p))
    
    t-=1
# cook your dish here
