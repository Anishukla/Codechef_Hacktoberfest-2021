# https://www.codechef.com/problems/SHUFFLIN
# https://www.codechef.com/viewsolution/51882465

n = int(input())
while(n):
    odd,even = 0,0,
    size = int(input())
    l = list(map(int,input().split(' ')))
    for x in l:
        odd += x&1
        even += not (x&1)
    print(min((size+1)//2,even)+min(size//2,odd))
    n-=1