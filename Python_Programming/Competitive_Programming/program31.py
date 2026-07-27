# Q31. Write a Lambda function which accepts a number and returns the True if number is Odd otherwise false

# lambda Function Name : CheckOdd
# Work : Accepts a number and returns the True if number is ODD otherwise false

CheckOdd = lambda No : "True" if No % 2 != 0 else "False"

def main():
    value = 0
    Ret = 0
    print("Enter a number :")
    value = int(input())
    
    Ret = CheckOdd(value)
    
    if Ret == "True":
        print(f"{value} is a Odd number\n")
    else:
        print(f"{value} is a Even number\n")

if __name__ == "__main__":
    main()


"""
output:

Enter a number :
5
5 is a Odd number

Enter a number :
22
22 is a Even number


"""