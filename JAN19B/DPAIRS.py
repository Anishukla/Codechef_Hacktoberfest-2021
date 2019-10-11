# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JAN19B/problems/DPAIRS
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

N, M = list(map(int,input().split()))
A = list(map(int,input().split()))
B = list(map(int,input().split()))
req1 = A[0]
req2 = B[0]
p = 0
q = 0
i = 0
while i<len(A):
    if A[i]>req1:
        req1 = A[i]
        p = i
    i = i+1
    
i = 0
while i<len(B):
    if B[i]<req2:
        req2 = B[i]
        q = i
    i = i+1
        
for i in range(len(A)):
    print(i,q,sep=" ")

for i in range(len(B)):
    if i!=q:
        print(p,i,sep=" ")