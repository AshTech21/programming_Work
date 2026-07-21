# Q20. Write a program which accepts one number and print numbers in reverse order from given number

# Function Name : ReverseNum()
# Work : Accept one number from user and print numbers in reverse order from given number.

def ReverNum(iNo):
    for i in range(iNo ,0,-1):
        print(i,end = "\t")
    print("\n")

def main():
    value = 0

    print("Enter first number :")
    value = int(input())
    
    ReverNum(value)

if __name__ == "__main__":
    main()


"""
Output:

Enter first number :
10
10	9	8	7	6	5	4   3	2	1

"""