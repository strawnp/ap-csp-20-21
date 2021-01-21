import formulas
import sys

def validate_arguments():
    argc = len(sys.argv)

    if argc != 2:
        print("Usage: python fahrenheit.py <temp>")
        sys.exit(1)

def get_menu_selection():
    print("Welcome to my temperature conversion program!")
    print("Type 1 to convert Celsius to Fahrenheit")
    print("Type 2 to convert Fahrenheit to Celsius")
    choice = int(input("Selection: "))
    return choice

def process_selection(selection):
    if selection == 1:
        celsius = float(sys.argv[1])
        print(f"F: {formulas.convert_c_to_f(celsius)}")
    elif selection == 2:
        fahrenheit = float(sys.argv[1])
        print(f"C: {formulas.convert_f_to_c(fahrenheit)}")
    else:
        print("Don't be a wise guy")
        sys.exit(2)

def main():
    validate_arguments()
    selection = get_menu_selection()
    process_selection(selection)

if __name__ == "__main__":
    main()