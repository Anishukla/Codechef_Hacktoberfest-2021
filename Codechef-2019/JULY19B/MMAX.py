if __name__=='__main__':
	for _ in range(int(input())):
		n = int(input())
		k = int(input())
		must_have = k//n
		remaining = k%n
		if remaining*2 < n:
			print(remaining*2)
		elif remaining*2 == n:
			print(n-1)
		else:
			print((n-remaining)*2)
