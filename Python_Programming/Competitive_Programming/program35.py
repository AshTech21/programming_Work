# Q35. Write a Lambda function which accept three numbers and returns largest number.

# lambda Function Name : Max3
# Work : Accepts three numbers and returns largest number.

Max3= lambda No1 ,No2, No3 : No1 if((No1>No2) and (No1 >No3)) else(No2 if(No2>No1 and No2 > No3) else No3)

def main():
    value1 = 0
    value2 = 0
    value3 = 0

    print("Enter First number :")
    value1 = int(input())

    print("Enter Second number :")
    value2 = int(input())

    print("Enter Third number :")
    value3 = int(input())
    
    Ret = Max3(value1,value2,value3)

    print(f"The Maximum number is :",Ret)
    
if __name__ == "__main__":
    main()


"""
output:

Enter First number :
11
Enter Second number :
21
Enter Third number :
51
The Maximum number is : 51


"""