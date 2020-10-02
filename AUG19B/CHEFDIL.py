# codechef problem CHEFDIL of contest AUG19B
t=input()
for c in range(0,t):
    a=raw_input("")
    s=[]
    e=0
    r=0
    s.append(a)
    s1=[]
    s2=[]
    z=1

    for d in s[0]:
        s1.append(int(d))
    m=len(s1)
    e=s1.count(1)
    
    if e%2!=0:
        print "WIN"
    else:
        print "LOSE"

