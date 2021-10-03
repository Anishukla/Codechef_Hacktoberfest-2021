import numpy as np

number = int(np.random.rand()*100+1)
score = 1

guess = int(input("Guess the number from 1-100: "))

while(guess!=number):
    
    if (guess<number):
        print("You guess wrong number! please guess again higher number")

    else:
        print("You guess wrong number! please guess again lower number")

    guess = int(input("(again) Guess the number from 1-100: "))
    score = score+1


print(f"Congratulations! You guess correct number on {score} chances")
