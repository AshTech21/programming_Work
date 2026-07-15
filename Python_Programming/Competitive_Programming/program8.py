# Q7. Write a program which accepts one number and prints the factorial of that number.

# Function Name : Factorial()
# Work : Accept one number from user and prints the factorial of that number.
def Factorial(No):
    fact = 1
    for i in range (1, No + 1):
        fact = fact * i
    return fact


def main():
    print("Enter a Number :")
    Value = int(input())

    Ret = Factorial(Value)
    print("The Factorial is :",Ret)

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
5
The Factorial is : 120




"""