# -*- coding: utf-8 -*-
"""
Created on Fri May 10 20:07:33 2019
@author: anishukla
"""

def mod(md):
    if(md<0):
        md = 0 -md
    else:
        md = md
    return md
        
T = int(input())
for i in range(T):
    X = []
    Y = []
    N = int(input())
    temp = 0
    k = 2.e0
    for i in range(N):
        A = input()
        A = A.split()
        M = int(A[0])
        O = int(A[1])
        p = M+O
        q = M-O
        X.append(p)
        Y.append(q)
    lgh = len(X)
    val = int(N/lgh)
    if(val == 1):
        for j in range(val):
            temp = temp*temp
            
    X = sorted(X)
    Y = sorted(Y)
    l = 2.000000
    mini = mod((X[0] - X[1])/l)
    mini = min(mod((Y[0] - Y[1])/l), mini)
    for i in range(1, N-1):
        mini = min(mod((X[i] - X[i+1])/l), mini)
        mini = min(mod((Y[i] - Y[i+1])/l), mini)
        temp = temp+1
        if(mini == 0.000000):
            break
    
    print(mini)
