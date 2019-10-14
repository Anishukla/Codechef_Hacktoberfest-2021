def fibb():
    fb = [0]*60
    for i in range(60):
        if i in (0,1):
            fb[i] = i
        else:
            fb[i] = fb[i-1] + fb[i-2]
    return [i%10 for i in fb]
if __name__=='__main__':
    fb = fibb()
    for _ in range(int(input())):
        n = int(input())
        if n==1:
            print(0)
        elif n<=2:
            print(1)
        else:
            p = len(bin(n))-3
            p = 1<<p
            print(fb[(p-1)%60])