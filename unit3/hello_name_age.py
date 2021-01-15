from sys import argv, exit

def main():
    argc = len(argv)

    if argc != 3:
        print("Usage: ./hello_name_age <first name> <age>")
        exit(1)

    age = int(argv[2])

    if age < 0:
        print("Usage: age must be a non-negative integer.")
        exit(2)

    print(f"hello, {argv[1]}!")
    print(f"On your next birthday, you will be {age + 1}.")

if __name__ == "__main__":
    main()