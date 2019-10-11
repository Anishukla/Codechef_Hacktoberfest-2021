# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JUNE19B/problems/CHFING
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

T = int(input())
ref = 1000000007

for i in range(T):
    N, K = input().split()
    N = int(N)
    K = int(K)
    req = N-1
    end = K-1
    start = end%req
    val = ((end-start)//req) + 1
    add = start + end
    if(val%2 == 0):
        val = val//2
        
    else:
        add = add//2
        
    op = 0
    while(add>0):
        if(add%2 == 1):
            op = op + val
        
        op = op%ref
        val = val*2
        val = val%ref
        
        add = add//2
    
    op = op%ref
        
    print(op%ref)