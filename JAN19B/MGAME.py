# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JAN19B/problems/DPAIRS
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

T = int(input())
for i in range(T):
    N, P = map(int,input().split())
    req = (N//2)+1
    
    if(N==1 or N==2):
        print(P**3)
        
    else:
        req=N%req
        b=(P-req)**2
        c=(P-N)*(P-req)
        a=(P-N)*(P-N)
        print(a+b+c)