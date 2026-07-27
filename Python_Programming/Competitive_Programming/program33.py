# Q33. Write a Lambda function which accepts two numbers and returns the Addition

# lambda Function Name : Add
# Work : Accepts two numbers and returns the Addition

Add = lambda No1 , No2 : No1+No2

def main():
    value1 = 0
    value2 = 0

    print("Enter First number :")
    value1 = int(input())

    print("Enter Second number :")
    value2 = int(input())
    
    Ret = Add(value1, value2)
    
    print("Adition is :",Ret)
    
if __name__ == "__main__":
    main()


"""
output:
Enter First number :
10
Enter Second number :
11
Adition is : 21



"""