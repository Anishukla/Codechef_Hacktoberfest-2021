from collections import Counter
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    if a==b:
        print(0)
    else:
        c=Counter(a)
        d=Counter(b)    
        x=[]
        y=[]
        w=[]
        s=[]
        k=0
        for i in c:
            if i in d:
                if c[i]==d[i]:
                    w.extend([i]*c[i])
                elif c[i]>d[i]:
                    if (c[i]-d[i])%2==0:
                        x.extend([i]*((c[i]-d[i])//2))
                    else:
                        k+=1
            else:
                if c[i]%2==0:
                    x.extend([i]*(c[i]//2))
                else:
                    k+=1
        for i in d:
            if i in c:
                if c[i]==d[i]:
                    s.extend([i]*c[i])
                elif d[i]>c[i]:
                    if (d[i]-c[i])%2==0:
                        y.extend([i]*((d[i]-c[i])//2))
                    else:
                        k+=1
            else:
                if d[i]%2==0:
                    y.extend([i]*(d[i]//2))
                else:
                    k+=1
        x.sort()
        y.sort()
        w.sort()
        s.sort()
        u=0
        if k==0:
            if len(w)>0:
                s1=min(x[0],y[0],w[0])
            else:
                s1=min(x[0],y[0])
            for j in range(len(x)):
                if 2*s1<=min(x[0],y[0]):
                    u=u+len(x)*(2*s1)
                    break
                else:
                    u=u+min(x[0],y[0])
                    a11=min(x[0],y[0])
                    if a11==x[0]:
                        x.remove(x[0])
                        y.remove(y[-1])
                    else:
                        y.remove(y[0])
                        x.remove(x[-1])
            print(u)
        else:
            print(-1)