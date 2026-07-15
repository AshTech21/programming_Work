# Q9. Write a program which accepts one number and prints all the even numbers till that number.

# Function Name : EvenNum()
# Work : Accept one number from user and prints all the even numbers till that number.
def EvenNum(No):
    for i in range (1, No + 1):
        if(i %2 == 0):
            print(i,end =" \t")
    print("\n")

def main():
    Value = int(input("Enter a Number: "))

    print("The Even Numbers are:")
    
    EvenNum(Value)
    

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number: 20
The Even Numbers are:
2 	4 	6 	8 	10 	12 	14 	16 	18 	20



"""