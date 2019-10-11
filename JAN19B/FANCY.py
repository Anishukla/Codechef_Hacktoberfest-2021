# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JAN19B/problems/FANCY
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

T = int(input())

for i in range(T):
    String = input()
    S = String.split()
    ln = len(S)
    
    for i in range(ln):
        if(S[i] == 'not'):
            print("Real Fancy")
            break
    else:
        print("regularly fancy")
        
