"""
https://www.codechef.com/SEPT20B/problems/TREE2/
"""
def main():
    t=int(input())
    for i in range(t):
        n=int(input())
        h=list(map(int, input().split()[:n]))
        s=set(h)
        s.discard(0)
        print(len(s))
    return 0
main()
