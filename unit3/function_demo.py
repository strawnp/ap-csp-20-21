import cs50
import random

def add_two_numbers(x, y):
    if x == 42:
        return 42
    else:
        return x + y

def main():
    rand_num = random.randint(1, 100)
    print(rand_num)
    #num1 = cs50.get_int("Num 1: ")
    #num2 = cs50.get_int("Num 2: ")
    #sum = add_two_numbers(num1, num2)
    #print(f"{num1} + {num2} = {sum}")

if __name__ == "__main__":
    main()