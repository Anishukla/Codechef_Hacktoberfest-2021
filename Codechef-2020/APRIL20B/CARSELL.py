""" Link to the problem: 
    https://www.codechef.com/APRIL20B/problems/CARSELL
    Link to my profile:
    https://www.codechef.com/users/rithikkaaa 
"""

T = int(input())

for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    A = sorted(A, reverse=True)
    val = 0

    for i in range(N):
        if A[i]-i>0:
            val = val + A[i]-i
            
    val = val%((10**9) + 7)
    
    print(val)
