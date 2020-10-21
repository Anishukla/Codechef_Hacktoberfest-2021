# https://www.codechef.com/FEB20B/problems/CASH/
# cook your dish here
t=int(input())
for i in range(t):
    a=input().split()
    b=input().split()
    a=list(map(int,a))
    b=list(map(int,b))
    s=0
    for j in b[:a[0]-1]:
        s+=(j%a[1])
    s=(b[a[0]-1]+s)%a[1]
    print(s)
