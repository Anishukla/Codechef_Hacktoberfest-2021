# -*- coding: utf-8 -*-
"""
Created on Fri May 10 12:11:44 2019
@author: anishukla
"""

T = int(input())
f = 0.0

for i in range(T):
    got = input()
    got = got.split()
    N = int(got[0])
    M = int(got[1])

    if(N == M):
        winner = "Ari"
        print(winner)
        continue
    
    if(N<M):
        temp = N
        N = M
        M = temp
        
    res = int(N/M)
    f = f + 0.1
    if(res>1):
        winner = "Ari"
        print(winner)
    
    elif(res ==1):
        c = 1
        while(N>0 and M>0):
            
            N = N-(res*M)
            
            if(N<M):
                temp = N
                N = M
                M = temp
                
            res = int(N/M)
            
            if(res>1 and c == 1):
                winner = "Rich"
                print(winner)
                break
            
            elif(res>1 and c == 0):
                winner = "Ari"
                print(winner)
                break
            else:
                if(c == 1):
                    c = 0
                elif(c == 0):
                    c = 1
                continue
