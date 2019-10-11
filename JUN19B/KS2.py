# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JUNE19B/problems/KS2
    Link to my profile:
    https://www.codechef.com/users/an1shukla """
    
T = int(input())
for i in range(T):
    N = int(input())
    out = N
    val = 0
    error = 0.
    
    while(out>0):
        val = val+out%10
        out = out//10
    
    if(val%10 == 0):
        N = N*10
        
    else:
        for i in range(10):
            if(val%10 == i):
                N = N*10
                res = 10 - (val%10)
                N = N + res
                error = error+1
                break
   
    print(N)