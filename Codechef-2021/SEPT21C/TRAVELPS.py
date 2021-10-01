#https://www.codechef.com/SEPT21C/problems/TRAVELPS
#https://www.codechef.com/viewsolution/51904104
t=int(input())
for i in range(t):
    n,a,b=map(int,input().split())
    s=input()
    sum=0
    for j in range(n):
        if(s[j]=='0'):
            sum+=a
        else:
            sum+=b
    print(sum)