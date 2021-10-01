#https://www.codechef.com/JULY21C/problems/EITA
#https://www.codechef.com/users/mayur2506


for _ in range(int(input())):
    d,x,y,z=map(int,input().split())
    f=x*7
    g=y*d+z*(7-d)
    print(max(f,g))