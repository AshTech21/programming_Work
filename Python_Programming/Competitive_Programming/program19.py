# Q19. Write a program which accepts one number and print number from 1 to till that number.

# Function Name : PrintNumbers()
# Work : Accept one number from user and print number from 1 to till that number.

def PrintNumbers(iNo):
    for i in range(1,iNo + 1):
        print(i,end = "\t")
    print("\n")

def main():
    value = 0

    print("Enter first number :")
    value = int(input())
    
    PrintNumbers(value)

if __name__ == "__main__":
    main()


"""
Output:

Enter first number :
10
1	2	3	4	5	6	7   8	9	10

"""