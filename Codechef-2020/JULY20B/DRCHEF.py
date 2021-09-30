for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    d=0
    tmp=n
    b=[]
    a.sort()
    for i in range(n):
        if a[i]>=x:
            b.append(a[i])
        else:
            x=max(x,2*a[i])
            d+=1

    for i in range(len(b)):
        t=b[i]
        if i<len(b)-1:
            while(t>x):
                t=t-x
                x=2*x
                t=min(2*t,b[i])
                d+=1
            d+=1
            x=2*b[i]
        else:   
            while(t>0):
                
                if t<=x:
                    d+=1
                    break
                else:
                    t=t-x
                    x=2*x
                    t=min(2*t,b[i])
                    d+=1
                
    print(d)