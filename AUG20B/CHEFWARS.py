'''
https://www.codechef.com/AUG20B/problems/CHEFWARS
'''


t = int(input())

for _ in range(t):
    h, p = map(int, input().split())
    flag = 0


    while p!=0:
        h-=p

        if h<= 0:
            print(1)
            flag = 1
            break

        p = p//2

    if flag ==0:
        print(flag)
