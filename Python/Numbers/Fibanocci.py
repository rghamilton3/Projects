user_input = int(input("Input N to generate Fibanocci sequence to: "))

n1 = 0
n2 = 1

for i in range(0, user_input+1):
    n = n1 + n2
    print(n2, n, end=" ")
    n1 = n
    n2 += n1