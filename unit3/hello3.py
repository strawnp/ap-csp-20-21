import cs50

name = input("Enter your name: ")
# age = int(input("Enter your age: "))
age = cs50.get_int("Enter your age: ")

print(f"hello, {name}! On your next birthday, you will be {age + 1}.")
