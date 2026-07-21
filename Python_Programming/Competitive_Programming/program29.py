# Q29. Write a Lambda function which accepts two numbers and print the minimum number

# lambda Function Name : Min
# Work :  Accepts  two numbers and print the minimum number

Min = lambda No1,No2 : No1 if No1 < No2 else No2

def main():
    value1 = 0
    value2 = 0

    print("Enter first number :")
    value1 = int(input())
    
    print("Enter Second:")
    value2 = int(input())
    
    iRet = Min(value1,value2)
    print("The Minimum number is : ",iRet)

if __name__ == "__main__":
    main()


"""
output:

Enter first number :
21
Enter Second:
11
The Minimum number is :  11




"""