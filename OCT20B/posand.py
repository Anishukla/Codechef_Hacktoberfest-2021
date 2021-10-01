'''problem code- POSAND
    contest code- OCT20B
    Link to problem- https://www.codechef.com/OCT20B/problems/POSAND/
    Link to my profile- https://www.codechef.com/users/codeash_14
    '''
def pot(a):
    return a!=0 and ((a&(a-1))==0)

for _ in range(int(input())):
    n=int(input())
    if n==1:
        print("1")
    elif n==3:
        print("1 3 2")
    elif n==5:
        print("2 3 1 5 4")
    elif(pot(n)):
        print(-1)
    else:
        print("2 3 1 5 4",end=" ")
        i=6
        while(i<=n):
            if(pot(i)):
                print(i+1,i,end=" ")
                i+=2
            else:
                print(i,end=" ")
                i+=1
    print()
        

