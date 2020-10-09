/* Link to the Problem : https://www.codechef.com/JULY20B/problems/ADAKING
   My Solution : https://www.codechef.com/viewsolution/38761066
*/ 

for _ in range (int(input())):
    n=int(input())
    x=n-1
    for i in range (8):
        for j in range (8):
            if(i==0 and j==0):
                print("O", end="")
                continue
            if(x>0):
                x -=1
                print(".",end="")
            else:
                print("X",end="") 
                
        print()