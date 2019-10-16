for i in range(int(input())):
    r,c=map(int, input().split())
    l1=[]
    l2=[]
    co=0
    for j in range(r*c):
        l1.append(j)
    j=0
    k=1
    while(j<=r*c):
        l2.append(j)
        j+=c
        if(j>=r*c and k<c):
            j=k
            k+=1
    k=0
    while(k<r*c):
        l3=[]
        l4=[]
        l3=l1.copy()
        l4=l2.copy()
        n=0
        while(n<r*c):
           l3.remove(l1[n])
           l4.remove(l2[n])
           n+=k+1
        k+=1
        for x in range(r*c):
            if(x not in l3 or x not in l4):
                co+=1
        print(co,end=" ")
        co=0
        
        

        
