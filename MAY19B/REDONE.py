# -*- coding: utf-8 -*-
"""
Created on Wed May  8 12:06:22 2019
@author: anishukla
"""

L = [1]
for i in range(1, 1000000):
    L.append(((L[-1]*(i+2)) + (i+1))%(1000000007))
    
T = int(input())
for i in range(T):
    N = int(input())
    print(L[N-1])
