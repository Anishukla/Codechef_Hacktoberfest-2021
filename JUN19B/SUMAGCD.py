# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JUNE19B/problems/SUMAGCD
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

import numpy as np

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

T = int(input())
for i in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    
    A = np.unique(A)
    l = len(A)
    A = list(A)
    A.insert(0, 0)
    req = -1
    
    start = [0]*(l+2)
    end = [0]*(l+2)
    
    start[0] = -1
    start[1] = A[1]
    end[l+1] = -1
    end[l] = A[l]
    
    for i in range(2, l+1):
        start[i] =  gcd(start[i-1], A[i])
        
    for i in range(l-1, 0, -1):
        end[i] =  gcd(end[i+1], A[i])
        
    for i in range(2, l):
        res =  gcd(start[i-1], end[i+1]) +A[i]
        
        req = max(res, req)
        
    if(start[0] == -1 and end[2] == -1):
        req = max(req, 2*A[0])
    
    else:
        req = max(req, A[1]+end[2])
        req = max(req, A[l] + start[l-1])
        
    if(l == 1):
        req = max(req, 2*A[1])
    
    print(req)
