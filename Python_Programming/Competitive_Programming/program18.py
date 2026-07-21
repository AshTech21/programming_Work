# Q18. Write a program which accepts one number and prints the addition, substraction ,multiplication and division

# Function Name : Arithmatic()
# Work : Accept one number from user and prints the addition, substraction ,multiplication and division

def Arithmatic(iNo1, iNo2):
    print("Addition is :",iNo1 + iNo2)

    print("Substraction is :",iNo1 + iNo2)

    print("Multiplication is :",iNo1 * iNo2)

    print("Division is :",iNo1 // iNo2)
    

def main():
    value1 = 0
    value2 = 0

    print("Enter first number :")
    value1 = int(input())

    print("Enter second number :")
    value2 = int(input())
    
    Arithmatic (value1,value2)

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
12
1	2	3	4	6	12

"""