T = int(input())
for i in range(T):
    N = int(input())
    if N==1:
        print(0)
   
    elif N == 2 or N == 3:
        print(1)
           
    else:
        for i in range(60):
            if (N+1)<=(2**i):
                k = i%4
                break
           
        if k == 0:
            print(3)
        if k == 1:
            print(0)
        if k == 2:
            print(9)
        if k == 3:
            print(2) 
