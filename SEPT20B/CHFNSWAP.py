import math

for i in range(int(input())):
    k=int(input())
    a=k*(k+1)//2
    b=0
    c=(a//2)-k
    e=0
    if a%2!=0 or k==0:
        print(0)
    
    else:
        if k==3:
            print(2)
        else:
            
            d=(-1+math.sqrt(1+4*a))/2
            z=int(d)
            if d==z:
                s=z*(z-1)//2
                t=(k-z)*(k-z-1)//2
                if t==0:
                    t=t+1
                e=e+s+t+k-z
            else:
                e=k-z
            print(e)