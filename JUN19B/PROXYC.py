# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JUNE19B/problems/PROXYC
    Link to my profile:
    https://www.codechef.com/users/an1shukla """
    
import math

T = int(input())

for i in range(T):
    D = int(input())
    S = input()
    S = list(S)
    present = 0
    proxy = 0
    
    req = math.ceil(0.75*D)
    for i in range(D):
        if(S[i] == 'P'):
            present = present+1
    
    if(D<=4):
        if(proxy+present >= req):
            print(proxy)
            
        else:
            print(-1)
            
    else:        
        for i in range(2, D-2):
            if(S[i] == 'A'):
                if((S[i-2] == 'P' or S[i-1] == 'P') and (S[i+2] == 'P' or S[i+1] == 'P')):
                    proxy = proxy+1
            
            if(proxy+present >= req):
                print(proxy)
                break
        
        if(proxy+present < req):
            print(-1)