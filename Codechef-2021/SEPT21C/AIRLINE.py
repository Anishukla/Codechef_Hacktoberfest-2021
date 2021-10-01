#https://www.codechef.com/problems/AIRLINE
#https://www.codechef.com/viewsolution/51883258
t=int(input())
for i in range(t):
    a,b,c,d,e=map(int,input().split())
    if((a+b<=d and c<=e)or (a+c<=d and b<=e) or (b+c<=d and a<=e)):
        print("yes")
    else:
        print("no")