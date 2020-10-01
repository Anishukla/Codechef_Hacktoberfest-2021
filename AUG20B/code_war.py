
def work(n,k,w):
     if max(w)>k:
          return -1
     if sum(w)<=k:
          return 1
     count=0
     su=0
     for i in range(n):
          if su<=k:
               su+=w[i]

          if su>k:
               su=w[i]
          if su==w[i]:
               count+=1
     return count
          
          
     
     

for _ in range(int(input())):
     n,k=input().split()
     n=int(n)
     k=int(k)
     w=list(map(int,input().strip().split()))[:n]
     print(work(n,k,w))
