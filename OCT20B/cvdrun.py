'''problem code- CVDRUN
    contest code- OCT20B
    Link to problem- https://www.codechef.com/OCT20B/problems/CVDRUN
    Link to my profile- https://www.codechef.com/users/codeash_14
    '''
for _ in range(int(input())):
    n,k,x,y=map(int,input().split(' '))
    a=[0 for i in range(n)]
    while True:
        if(a[y]==1):
            print("YES")
            break
        if(a[x]==1):
            print("NO")
            break
        a[x]=1
        x=(x+k)%n
