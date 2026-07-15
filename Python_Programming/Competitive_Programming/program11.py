# Q11. Write a program which accepts one number and check whether that number is prime or not.

# Function Name : ChkPrime()
# Work : Accept one number from user and check whether that number is prime or not.
def ChkPrime(No):
    flag = False
    for i in range (2, No):
        if((No % i) == 0):
            flag = True
            break

    return flag
        

def main():
    Value = int(input("Enter a Number: "))
    
    ret = ChkPrime(Value)

    if (ret == True):
        print("The Given Number is not a Prime Number..")
        
    else:
        print("The Given Number is Prime Number..")
        
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number: 7
The Given Number is Prime Number..

Enter a Number: 10
The Given Number is not a Prime Number..


"""