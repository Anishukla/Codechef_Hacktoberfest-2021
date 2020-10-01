""" Link to the problem: 
    https://www.codechef.com/JUNE20B/problems/PRICECON
    Link to my profile:
    https://www.codechef.com/users/rithikkaaa 
"""

T = int(input())
for i in range(T):
    N, K = input().split()
    N = int(N)
    K = int(K)
    
    A = list(map(int, input().split()))
    
    c = 0
    for i in range(N):
        if A[i]>K:
            c = c + (A[i]-K)
            
    print(c)
