import cs50

x = cs50.get_int("Enter a number: ")
y = cs50.get_int("Enter another number: ")

remainder = x % y

if remainder == 0:
    print(f"{x} is evenly divisible by {y}")
else:
    print(f"{x} is not evenly divisible by {y}")
