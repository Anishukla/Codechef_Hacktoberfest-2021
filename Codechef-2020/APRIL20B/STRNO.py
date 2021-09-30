""" Link to the problem: 
    https://www.codechef.com/APRIL20B/problems/STRNO
    Link to my profile:
    https://www.codechef.com/users/rithikkaaa 
"""

import math 
def primeFactors(n, l): 
    while n % 2 == 0: 
        L.append(2)
        n = n / 2
        
    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            L.append(i) 
            n = n / i 
            
    if n > 2: 
        L.append(int(n))

T = int(input())

for i in range(T):
    N, K = input().split()
    K = int(K)
    N = int(N)
    L = []
    if N==1 and K==1:
        print("1")
        
    elif N<=K:
        print("0")
    
    elif N>1:
        primeFactors(N, L)
    
        if len(L)>=K:
            print("1")
        
        elif len(L)<K:
            print("0")
