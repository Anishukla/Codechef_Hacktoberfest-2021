
def sum_prod(n, k, arr):
    lim = 1000000007
    dp = [[(0,0)]*(n+1) for i in range(k+1)]
    sums = [0]*(k+1)
    for i in range(k+1):
        sm = 0
        for j in range(n+1-i):
            if i == 0:
                sm += arr[j]
                sm = sm%lim
                dp[i][j] = (arr[j],sm)
            else:
                t = (arr[j]*(sums[i-1] - dp[i-1][j][1]))%lim
                sm += t
                sm = sm%lim
                dp[i][j] = (t, sm)
        sums[i] = sm
    ret = 0
    for i in sums:
        ret = (ret + i)%lim
    return ret

if __name__=="__main__":
    n,k = map(int, input().split())
    arr = list(map(int, input().split()))
    s_arr = set(arr)
    a = [arr.count(i) for i in s_arr]
    N = len(a)
    print(sum_prod(N-1,min(N-1, k-1),a)+1)