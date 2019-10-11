# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/MARCH19B/problems/JAIN
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

T = int(input())
for i in range(T):
    cost = 0
    L = []
    N = int(input())
    for j in range(N):
        A = input()
        L.append(A)
    for j in range(N):
        lj = len(L[j])
        for k in range(j+1, N):
            a = 0
            e = 0
            i = 0
            o = 0
            u = 0
            lk = len(L[k])
            s = max(lj, lk)
            for t in range(s):
                if L[j][t] or L[k][t] == 'a':
                    a = 1
                if L[j][t] or L[k][t]  == 'e':
                    e = 1
                if L[j][t] or L[k][t]  == 'i':
                    i = 1
                if L[j][t] or L[k][t] == 'o':
                    o = 1
                if L[j][t] or L[k][t] == 'u':
                    u = 1
                if(a and e and i and o and u):
                    cost = cost+1
                    print(L[j], L[k])
                    break
                
    print(cost)