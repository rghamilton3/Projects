from math import pi

while True:
    n_place = int(input("Enter the decimal place between 1 and 48 to calculate PI to: "))
    if n_place > 48:
        print("Please enter a smaller number.")
    elif n_place < 1:
        print("Please enter a larger number:")
    else:
        break

pi_string = "{:.{fill}f}".format(pi, fill=n_place)

print(pi_string)