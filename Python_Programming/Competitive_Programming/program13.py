# Q13. Write a program which accepts one number and prints the sum of digits

# Function Name : SumOfDigits()
# Work : Accept one number from user and prints the sum of digits

def SumOfDigits(iNo):
    iDigit = 0
    iSum = 0

    while iNo != 0:
        iDigit = iNo % 10 
        iSum = iSum + iDigit
        iNo = iNo // 10         #use '//' insteed of '/' for division
    return iSum
        
def main():
    Value = 0

    print("Enter a number :")
    Value = int(input())

    iRet = SumOfDigits(Value)

    print(f"The Sum of Digits in the {Value} is : {iRet}")
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
751
The Sum of Digits in the 751 is : 13



"""