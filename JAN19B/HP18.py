# -*- coding: utf-8 -*-
"""
@author: anishukla
"""

""" Link to the problem: 
    https://www.codechef.com/JAN19B/problems/HP18
    Link to my profile:
    https://www.codechef.com/users/an1shukla """

T = int(input())
for i in range(T):
	q = 0
	p = 0
	N, a, b = map(int,input().split())
	A =  list(map(int,input().split()))
	for j in range(N):
		val = 0
		if(A[j]%a == 0):
			p = p + 1
		if(A[j]%b == 0):
			q = q + 1
	for k in range(N):
			if(A[k]%(a*b)==0):
				val = 1
				break
	if(p > q and (p)):
		print("BOB")
	else: 
		
		if(q == p and val):
			print("BOB")
		else:
			print("ALICE")
