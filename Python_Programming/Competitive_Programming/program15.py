# Q14. Write a program which accepts one number and check weather it is palindrome or not

# Function Name : ChkPalindrome()
# Work : Accept one number from user and check weather it is palindrome or not

def ChkPalindrome(iNo):
    iDigit = 0
    iRev = 0
    Flag = False
    temp = iNo
    while temp != 0:
        iDigit = temp % 10 
        iRev = (iRev * 10) + iDigit
        temp = temp // 10         #use '//' insteed of '/' for division
    
    if(iRev == iNo):
        Flag = True
        
    return Flag

def main():
    Value = 0

    print("Enter a number :")
    Value = int(input())

    Ret = ChkPalindrome(Value)

    if (Ret == True):
        print(f"{Value} is a Palindrome Number..\n")
    else:
        print(f"{Value} is not a Palindrome Number..\n")
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
222
222 is a Palindrome Number..

Enter a number :
751
751 is not a Palindrome Number..

"""