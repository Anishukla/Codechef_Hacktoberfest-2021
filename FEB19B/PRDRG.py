from fractions import Fraction
A = list(map(int, input().split()))
T = A[0]
list_1 = A[1:]
my_list = []
for i in range(T):
    p = list_1[i]
    if p == 1 or p == 2:
        val = ((1/2)**(list_1[i]))
        value = int(1/val)
        my_list.append(1)
        my_list.append(value)
    else:
        mean = [1/2, 1/4]
        for i in range(p-2):
            new_mean = (mean[i] + mean[i+1])/2
            mean.append(new_mean)
        z = Fraction(mean[-1])
        my_list.append(z.numerator)
        my_list.append(z.denominator)

print(*my_list, sep =" ")
