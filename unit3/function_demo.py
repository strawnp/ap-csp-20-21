import cs50

def add_two_numbers(x, y):
    return x + y

def main():
    num1 = cs50.get_int("Num 1: ")
    num2 = cs50.get_int("Num 2: ")
    sum = add_two_numbers(num1, num2)
    print(f"{num1} + {num2} = {sum}")

if __name__ == "__main__":
    main()
