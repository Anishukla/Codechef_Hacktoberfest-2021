for _ in range(int(input())):
    n=int(input())
    a=0
    b=0
    for i in range(n):
        s1,s2=input().split()
        a1=[]
        b1=[]
        a1.extend(s1)
        b1.extend(s2)
        a1[:]=map(lambda x:int(x),a1)
        b1[:]=map(lambda x:int(x),b1)
        s=sum(a1)
        ss=sum(b1)
        if s>ss:
            a+=1
        elif s<ss:
            b+=1
        elif s==ss:
            a+=1
            b+=1
    if a==b:
        print(2,a)
    elif a>b:
        print(0,a)
    elif a<b:
        print(1,b)