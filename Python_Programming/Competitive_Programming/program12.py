# Q12. Write a program which accepts one number and prints the count of digits in that number.

# Function Name : CountDigit()
# Work : Accept one number from user and prints the count of digits in that number.

def CountDigits(iNo):
    iDigit = 0
    iCount = 0

    while iNo != 0:
        iDigit = iNo % 10 
        iCount = iCount + 1
        iNo = iNo // 10         #use '//' insteed of '/' for division
    return iCount
        
def main():
    Value = 0

    print("Enter a number :")
    Value = int(input())

    iRet = CountDigits(Value)

    print(f"The Count of Digits in the {Value} is : {iRet}")
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
751
The Count of Digits in the 751 is : 3



"""