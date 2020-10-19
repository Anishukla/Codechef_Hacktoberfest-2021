"""
@author: josephLSalgado
"""

""" Link to the problem: 
    https://www.codechef.com/problems/CRDGAME
    Link to my profile:
    https://www.codechef.com/users/new_deadpool """
    
T = int(input())

for i in range(T):
    N = int(input())

    pila = [input().split()[:2] for j in range(N)]
    chef = 0
    morty = 0

    for j in range(N):
        lista = []

        for k in range(2):
            suma = 0

            for l in (list(map(int, tuple(pila[j][k])))):
                suma += l

            lista.append(suma)

        if lista[0] > lista[1]:
            chef += 1
        
        elif lista[0] < lista[1]:
            morty += 1
        
        else:
            chef += 1
            morty += 1
    
    if chef > morty:
        print('0', str(chef))
    
    elif chef < morty:
        print('1', str(morty))

    else:
        print('2', str(chef))
