""" Link to the problem: 
    https://www.codechef.com/MAY20B/problems/COVID19
    Link to my profile:
    https://www.codechef.com/users/rithikkaaa 
"""

T = int(input())
for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    c = 1
    L = []
    
    for i in range(N-1):
        if A[i+1]>A[i]+2:
            L.append(c)
            c = 1
            
        elif A[i+1]<=A[i]+2:
            c = c+1
            
    L.append(c)

    print(min(L), max(L))
