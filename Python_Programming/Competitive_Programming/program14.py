# Q14. Write a program which accepts one number and prints the reverse of that number

# Function Name : Reverse()
# Work : Accept one number from user and prints the reverse of that number

def Reverse(iNo):
    iDigit = 0
    iRev = 0

    while iNo != 0:
        iDigit = iNo % 10 
        iRev = (iRev * 10) + iDigit
        iNo = iNo // 10         #use '//' insteed of '/' for division
    return iRev
        
def main():
    Value = 0

    print("Enter a number :")
    Value = int(input())

    iRet = Reverse(Value)

    print(f"The Reverse Number of {Value} is : {iRet}")
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
751
The Reverse Number of 751 is : 157

Enter a number :
567863
The Reverse Number of 567863 is : 368765


"""