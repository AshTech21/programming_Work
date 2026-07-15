# Q2. Write a program which contains one Function ChkGreater() that accepts two numbers and prints the greater number.

# Function Name : ChkGreater()
# Work : Accept Two number from user and print the greatest one
def ChkGreater(No1, No2):
    if No1 > No2:
        print("Greater Number is :",No1) 
    else:
        print("Greater Number is :",No2)

def main():
    print("Enter First Number :")
    Value1 = int(input())

    print("Enter Second Number :")
    Value2 = int(input())

    ChkGreater(Value1, Value2)


if __name__ == "__main__":
    main()


"""
Output:

Enter First Number :
250
Enter Second Number :
550
Greater Number is : 550


"""