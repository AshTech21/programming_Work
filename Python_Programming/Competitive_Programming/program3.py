# Q3. Write a program which accepts one number and print Square of that number.

# Function Name : Square()
# Work : Accept one number from user and print the Square of that number.
def Square(No):
    return No * No

def main():
    print("Enter a Number :")
    Value = int(input())

    Ret = Square (Value)
    print("The Square of given Number is :",Ret)


if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
5
The Square of given Number is : 25



"""