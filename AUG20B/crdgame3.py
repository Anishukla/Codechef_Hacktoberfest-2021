# cook your dish here
def card(n,k):
    if len(str(k))==1:
        return [1,1]

    count_n=n//9
    if n%9>0:
        count_n+=1
    count_k=k//9
    if k%9>0:
        count_k+=1

    if count_n>count_k:
        return [1,count_k]
    else:
        return [0,count_n]



t=int(input())
while t>=1:
    n,k=input().split()
    n=int(n)
    k=int(k)
    li=card(n,k)
    print(*li)
    
    t-=1
