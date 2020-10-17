T=int(input())
while(T>=1):
    N,K = input().split()

    P=list(map(int, input().strip().split()))[:int(N)]
    ir=sum(P)
    P.sort()
    a=0
    for i in range (len(P)):
        if P[i]<=int(K):
            a=a+P[i]
        else:
            a=a+int(K)
    print(ir-a)

    


    
    T-=1
