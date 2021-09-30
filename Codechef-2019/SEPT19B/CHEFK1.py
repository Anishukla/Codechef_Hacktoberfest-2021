def find_cost(n,m):
    if n==1 and m==0:
        return 0
    if n==1 and m==1:
        return 1
    if n==2 and m == 1:
        return 1
    if m < n-1:
        return -1
    if m > ((n*(n-1)//2)+n):
        return -1
    if m <= n+1:
        return 2
    if m <= 2*n:
        return 3
    if (2*m)/n == (2*m)//n:
        return (2*m)//n -1
    return 2*m//n


if __name__=="__main__":
    for _ in range(int(input())):
        n,m = map(int, input().split())
        print(find_cost(n,m))