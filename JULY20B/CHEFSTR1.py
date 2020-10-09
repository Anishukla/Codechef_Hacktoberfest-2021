for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=[]
    for i in range(n-1):
        x=a[i+1]-a[i]
        x=abs(x)-1
        b.append(x)
    s=sum(b)
    print(s)