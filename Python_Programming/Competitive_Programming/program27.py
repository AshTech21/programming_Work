# Q27. Write a Lambda function which accepts one numbers and return Cube of that number.

# lambda Function Name : Cube
# Work :  accepts one numbers and return Cube of that number.

Cube = lambda No: No ** 3

def main():
    value = 0
    Ret = 0
    print("Enter Marks :")
    value = int(input())
    
    Ret = Cube(value)
    print(f"Cube of {value} is : {Ret}")

if __name__ == "__main__":
    main()


"""
Output:
Enter Marks :
4
Cube of 4 is : 64

Enter Marks :
8
Cube of 8 is : 512


"""