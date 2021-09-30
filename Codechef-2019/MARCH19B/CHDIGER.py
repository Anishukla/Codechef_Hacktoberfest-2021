# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/MARCH19B/problems/CHDIGER
    Link to my profile:
    https://www.codechef.com/users/an1shukla """
    
T = int(input())
for j in range(T):
    N, d = input().split()
    l1 = len(N)
    pos = 0
    a = ""
    while(pos != l1):
        cr = N[pos]
        for i in range(pos+1, l1):
            if(cr>N[i]):
                cr = N[i]
                pos = i
            
        if(cr<d):
            a = a+cr
            pos = pos+1
            
        else:
            break
    

    l2 = len(a)
    for x in range(0, l1-l2):
        a = a+d
    print(a)

        