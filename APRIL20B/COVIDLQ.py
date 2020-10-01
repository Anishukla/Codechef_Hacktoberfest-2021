""" Link to the problem: 
    https://www.codechef.com/APRIL20B/problems/COVIDLQ
    Link to my profile:
    https://www.codechef.com/users/rithikkaaa 
"""

T = int(input())

for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    L = []
    c = 0
    
    for i in range(N):
        if A[i]==1:
            L.append(i)
            
    val = len(L)
            
    for i in range(1, val):
        if L[i]-L[i-1]<6:
            print("NO")
            break
        
        else:
            c=c+1
    
    if c==val-1:
        print("YES")
