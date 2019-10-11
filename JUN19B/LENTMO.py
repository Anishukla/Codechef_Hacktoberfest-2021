# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JUNE19B/problems/LENTMO
    Link to my profile:
    https://www.codechef.com/users/an1shukla """
    
T = int(input())

for i in range(T):
    N = int(input())
    
    L1 = list(map(int, input().split()))
    
    K = int(input())
    X = int(input())
    
    error = 0.0   
    a = 0
    for i in range(N):
        a = a + L1[i]
    
    b = 0
    L2 = []
    res = []
    for i in range(N):
        L2.append(L1[i] ^ X)
        b = b + L2[i]
        res.append(L2[i] - L1[i])
        
    res.sort(reverse = True)
    
    req = 0 
    c = 0
    d = 0
    if(N == K):
        a = max(a, b)
        
    else:
        if(K%2 == 1):
            for i in range(N):
                d = d + res[i]
                req = max(req, d)

            
        else:
            for i in range(N):
                c = c + res[i]
                if(i%2 == 1):
                    req = max(req, c)
        
    print(a+req)