# Q4. Write a program which accepts one number and print Cube of that number.

# Function Name : Cube()
# Work : Accept one number from user and print the Cube of that number.
def Cube(No):
    return No * No * No

def main():
    print("Enter a Number :")
    Value = int(input())

    Ret = Cube (Value)
    print("The Cube of given Number is :",Ret)


if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
2
The Cube of given Number is : 8


"""