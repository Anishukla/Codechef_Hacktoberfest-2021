T = int(input())
while(T>0):
    count = 0
    r = 0
    N = int(input())
    the_list = []
    for i in range(N):
        S = input() 
        the_list.append(S) 
        for j in range(i):
            if(the_list[i] == the_list[j]):
                r = 1
                
        if(r == 0):
            count = count + 2
            l = len(the_list[i])
            for j in range(l-1):
                if(((the_list[i][j]=='d' or the_list[i][j]=='f' )and(the_list[i][j+1]=='j' or the_list[i][j+1]=='k')) or ((the_list[i][j]=='j'or the_list[i][j]=='k' ) and (the_list[i][j+1]=='d' or the_list[i][j+1]=='f'))):
                    count = count + 2
                elif(((the_list[i][j]=='d' or the_list[i][j]=='f' )and(the_list[i][j+1]=='d' or the_list[i][j+1]=='f')) or ((the_list[i][j]=='j'or the_list[i][j]=='k' ) and (the_list[i][j+1]=='j' or the_list[i][j+1]=='k'))):
                    count = count + 4
                
                    
        else:
            count = count + 1
            l = len(the_list[i])
            for j in range(l-1):
                if(((the_list[i][j]=='d' or the_list[i][j]=='f' )and(the_list[i][j+1]=='j' or the_list[i][j+1]=='k')) or ((the_list[i][j]=='j'or the_list[i][j]=='k' ) and (the_list[i][j+1]=='d' or the_list[i][j+1]=='f'))):
                    count = count + 1
                elif(((the_list[i][j]=='d' or the_list[i][j]=='f' )and(the_list[i][j+1]=='d' or the_list[i][j+1]=='f')) or ((the_list[i][j]=='j'or the_list[i][j]=='k' ) and (the_list[i][j+1]=='j' or the_list[i][j+1]=='k'))):
                    count = count + 2
            r = 0
    
    print(int(count))
    
    T = T - 1
    
        
                                                    		
		