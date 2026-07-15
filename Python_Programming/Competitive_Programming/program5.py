# Q5. Write a program which accepts one number and checks whether it is divisible by 3 & 5.

# Function Name : ChkDiv()
# Work : Accept one number from user and check wether it is Divisible by 3 & 5.
def ChkDiv(No):
    if (No % 3 == 0) and (No % 5 == 0):
        return True
    else:
        return False

def main():
    print("Enter a Number :")
    Value = int(input())

    Ret = ChkDiv(Value)
    
    if (Ret == True):
        print("The Given Number is Divisible by 3 & 5..")
    else:
        print("The Given Number is Not Divisible by 3 & 5..")


if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
15
The Given Number is Divisible by 3 & 5..

Enter a Number :
76
The Given Number is Not Divisible by 3 & 5..


"""