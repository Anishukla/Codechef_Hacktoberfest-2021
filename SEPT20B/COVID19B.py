

for i in range(int(input())):
    n=int(input())
    l=[int(x) for x in  input().split()]
    p=[]
    for j in range(0,n):
        o=[]
        for k in range (0,n):
            if j<k:
                a=k-j
                if ((l[j]-l[k]))!=0:
                    a=a/(l[j]-l[k])
                    o.append(a)
                else:
                    o.append(0)
            if j==k:
                o.append(0)
                    
            if j>k:
                a=j-k
                if ((l[j]-l[k]))!=0:
                    a=a/(l[k]-l[j])
                    o.append(a)
                else:
                    o.append(0)
        p.append(o)
    m=[]
    for j in range(n-1):
        d=0
        for k in range(n-1):
            if p[j][k]>0:
                d=d+1
        m.append(d)
    x=[]
    for q in range(0,n):
        y=1
        for t in range(n):
            if p[q][t]<=0:
                f=0
                for w in range(n):
                    if w!=t:
                        if (p[q][w]>0 and p[q][w]<p[t][w]):
                            f=f+1
                if f>0:
                    y=y+1
            else:
                y=y+1
        x.append(y)
    print(min(x) ,max(x))
                    