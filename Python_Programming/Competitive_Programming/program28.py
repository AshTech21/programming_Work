# Q28. Write a Lambda function which accepts two numbers and print the maximum number

# lambda Function Name : Max
# Work :  Accepts  two numbers and print the maximum number

Max = lambda No1,No2 : No1 if No1 > No2 else No2

def main():
    value1 = 0
    value2 = 0


    print("Enter first number :")
    value1 = int(input())
    
    print("Enter Second:")
    value2 = int(input())
    
    iRet = Max(value1,value2)
    print("The Maximum number is : ",iRet)

if __name__ == "__main__":
    main()


"""
Enter first number :
11
Enter Second:
21
The Maximum number is :  21



"""