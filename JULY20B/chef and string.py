t=int(input())
for i in range(t):
    g=input()
    
    res=sum(1 for i in range (len(g)) if g.startswith("xy",i))
    print(res)
