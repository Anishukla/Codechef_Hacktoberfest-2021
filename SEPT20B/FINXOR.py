from sys import stdin

def ask(k):
    print(1, k, flush=True)

def ans(k):
    print(2, k, flush=True)

for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    k = 2**20
    ask(k)
    s = int(stdin.readline())
    if s == -1:
        break
    s -= (n * k)
    cond = True
    i = 1
    final = 0
    if s % 2 != 0:
        final += 1
    while(i <= 19):
        k = 2**i
        p = s + (k * n)
        ask(k)
        i += 1
        x = int(stdin.readline())
        if x == -1:
            cond = False
            break
        else:
            if ((p - x) // (2 * k)) % 2 != 0:
                final += k

    if cond == False:
        break
    else:
        ans(final)
        x = int(stdin.readline())
        if x == -1:
            break
        else:
            continue
