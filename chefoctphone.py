# -*- coding: utf-8 -*-
"""
Created on Fri Oct  4 23:33:48 2019

@author: DELL
"""

for z in range(int(input())):
    n=int(input())
    l=[]
    k=0
    co=0
    c=0
    l=[int(x) for x in input().split()]
    for i in range(n-1,0,-1):
        co=0
        for j in range(i-1,-1,-1):
            k+=1
            if(l[j]>l[i]):
                co+=1
            if(co==5 or co==i):
                c+=1
                co=0
            if(k==5):
                k=0
                break
        k=0
    print(c+1)
            
                
            