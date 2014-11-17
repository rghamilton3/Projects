from math import e

while True:
    n_place = int(input("Enter the decimal place between 1 and 48 to calculate e to: "))
    if n_place > 51:
        print("Please enter a smaller number.")
    elif n_place < 1:
        print("Please enter a larger number:")
    else:
        break

e_string = "{:.{fill}f}".format(e, fill=n_place)

print(e_string)