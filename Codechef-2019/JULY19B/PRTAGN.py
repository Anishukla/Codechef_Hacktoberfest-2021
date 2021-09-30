from collections import defaultdict

if __name__ == '__main__':
	for _ in range(int(input())):
		q = int(input())
		st = []
		freq = defaultdict(int)
		o = 0
		e = 0
		for _ in range(q):
			n = int(input())
			nlist = []
			if n not in freq:
				nlist.append(n)
				freq[n] = len(st)+1
				for i in st:
					t = i^n
					if t not in freq:
						freq[t] = 1
						nlist.append(t)
			for i in nlist:
				if bin(i).count('1')%2==0:
					e += 1
				else:
					o += 1
			st += nlist
			print(e,o)