# Q26. Write a Lambda function which accepts one numbers and return square of that number.

# lambda Function Name : Square
# Work :  accepts one numbers and return square of that number.

Square = lambda No: No ** 2

def main():
    value = 0
    Ret = 0
    print("Enter Marks :")
    value = int(input())
    
    Ret = Square(value)
    print(f"Square of {value} is : {Ret}")

if __name__ == "__main__":
    main()


"""
Output:

Enter Marks :
11
Square of 11 is : 121



"""