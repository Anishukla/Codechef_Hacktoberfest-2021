'''
Link to the problem:
https://www.codechef.com/FEB19B/problems/CHEFING/
Link to my profile:
https://www.codechef.com/users/manasa28
'''

def removeDupWithoutOrder(str):
  return "".join(set(str))

t=input()
for i in range(t):
  n=input()
  l=[]
  count=0
  for j in range(n):
    s=raw_input()
    a=removeDupWithoutOrder(s)
    l.append(a)
  lst2 = sorted(l, key=len)
  x=len(lst2[0])
  for j in range(x):
    flag=0
    for k in range(n):
      if lst2[0][j] in lst2[k]:
        flag=flag+1
    if(flag==n):
      count=count+1
  print count
