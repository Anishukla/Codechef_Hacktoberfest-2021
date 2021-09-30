if __name__=='__main__':
    for _ in range(int(input())):
        n = int(input())
        coins = list(map(int, input().split()))
        av = sum(coins)/n
        if av in coins:
            print(coins.index(av)+1)
        else:
            print('Impossible')
