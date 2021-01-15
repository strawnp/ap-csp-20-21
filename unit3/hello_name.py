# import sys
from sys import argv, exit

def main():
    argc = len(argv)

    if argc != 2:
        print("Usage: ./hello_name <first name>")
        exit(1)

    print(f"hello, {argv[1]}!")

if __name__ == "__main__":
    main()