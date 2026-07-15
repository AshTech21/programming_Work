# Q7. Write a program which accepts one number and print the sum of First N natural numbers.

# Function Name : SumOfNaturals()
# Work : Accept one number from user and print the sum of First N natural numbers.
def SumOfNaturals(No):
    sum = 0
    for i in range (1 , No + 1):
        
        sum = sum + i

    return sum


def main():
    print("Enter a Number :")
    Value = int(input())

    Ret = SumOfNaturals(Value)
    print("The Sum of the First N Natural Numbers is :",Ret)

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
5
The Sum of the First N Natural Numbers is : 15



"""