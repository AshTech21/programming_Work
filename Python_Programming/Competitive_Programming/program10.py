# Q10. Write a program which accepts one number and prints all the Odd numbers till that number.

# Function Name : OddNum()
# Work : Accept one number from user and prints all the Odd numbers till that number.
def OddNum(No):
    for i in range (1, No + 1):
        if(i %2 != 0):
            print(i,end =" \t")
    print("\n")

def main():
    Value = int(input("Enter a Number: "))

    print("The Odd Numbers are:")
    
    OddNum(Value)
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number: 20
The Odd Numbers are:
1 	3 	5 	7 	9 	11 	13 	15 	17 	19 


"""