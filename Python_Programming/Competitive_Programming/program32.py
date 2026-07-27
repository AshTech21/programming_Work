# Q32. Write a Lambda function which accepts a number and returns True if number is divisible by 5

# lambda Function Name : ChkDiv
# Work : Accepts a number and returns True if number is divisible by 5

ChkDiv = lambda No : "True" if No % 5 == 0 else "False"

def main():
    value = 0
    Ret = 0
    print("Enter a number :")
    value = int(input())
    
    Ret = ChkDiv(value)
    
    if Ret == "True":
        print(f"{value} is Divisible by 5\n")
    else:
        print(f"{value} is not Divisible by 5\n")

if __name__ == "__main__":
    main()


"""
output:

Enter a number :
25
25 is Divisible by 5

Enter a number :
2
2 is not Divisible by 5


"""