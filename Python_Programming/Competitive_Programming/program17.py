# Q17. Write a program which accepts one number and print its factors.

# Function Name : Factors()
# Work : Accept one number from user and print its factors.

def Factors(iNo):
    
    for i in range(1 , iNo + 1):
        if(iNo % i == 0):
            print(i,end = "\t")
    print("\n")

def main():
    Value = 0

    print("Enter a number :")
    Value = int(input())

    Factors(Value)

if __name__ == "__main__":
    main()


"""
Output:

Enter a number :
12
1	2	3	4	6	12

"""