# Q34. Write a Lambda function which accepts two numbers and returns the Multiplication

# lambda Function Name : Mul
# Work : Accepts two numbers and returns the Multiplication

Mul = lambda No1 , No2 : No1 * No2

def main():
    value1 = 0
    value2 = 0

    print("Enter First number :")
    value1 = int(input())

    print("Enter Second number :")
    value2 = int(input())
    
    Ret = Mul(value1, value2)
    
    print("Multiplication is :",Ret)
    
if __name__ == "__main__":
    main()


"""
output:

Enter First number :
345
Enter Second number :
32
Multiplication is : 11040




"""