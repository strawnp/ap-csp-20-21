import cs50

x = cs50.get_int("Enter a number: ")
y = cs50.get_int("Enter another number: ")

if x > y:
    print(f"{x} is greater than {y}")
elif x < y:
    print(f"{x} is less than {y}")
else:
    print(f"{x} is equal to {y}")
