for _ in range(int(input())):
    n=int(input())
    x=[]
    y=[]
    d1={}
    d2={}
    for i in range(4*n-1):
        x1,y1=map(int,input().split())
        x.append(x1)
        y.append(y1)
        if x1 in d1:
            d1[x1]+=1
        elif x1 not in d1:
            d1[x1]=1
        if y1 in d2:
            d2[y1]+=1
        elif y1 not in d2:
            d2[y1]=1
    for i in d1:
        if d1[i]%2==1:
            s1=i
    for i in d2:
        if d2[i]%2==1:
            s2=i                               
    print(s1,s2)