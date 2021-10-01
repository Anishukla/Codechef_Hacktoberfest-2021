'''problem code- CHEFEZQ
    contest code- OCT20B
    Link to problem- https://www.codechef.com/OCT20B/problems/CHEFEZQ
    Link to my profile- https://www.codechef.com/users/codeash_14
    '''

for _ in range(int(input())):
    n,k=map(int,input().split(' '))
    q=list(map(int,input().split(' ')))
    t=0
    c=0
    for i in range(n):
        var=q[i]+c
        if(var<k):
            break
        c=var-k
        t+=1
        
    if(t==n):
        t+=(c//k)
    print(t+1)
