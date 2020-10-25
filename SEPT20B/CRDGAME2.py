from sys import stdin
import functools

mod = 10**9 + 7

def nCr(n, r):
    r = min(r, n - r)
    a = functools.reduce(lambda x, y: (x * y) % mod, range(n, n - r, -1), 1)
    b = functools.reduce(lambda x, y: (x * y) % mod, range(1, r + 1), 1)
    b = pow(b, mod - 2, mod)
    return (a * b) % mod

for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    C = list(map(int, stdin.readline().split()))
    m = max(C)
    count = C.count(m)
    rem = n - count
    ans = pow(2, rem, mod)
    k = pow(2, count, mod)
    if count % 2 != 0:
        ans = (ans * k) % mod
    else:
        x = nCr(count, count // 2)
        mul = (k - x) % mod
        ans = (ans * mul) % mod
    print(ans)
