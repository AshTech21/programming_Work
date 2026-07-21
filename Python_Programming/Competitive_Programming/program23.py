# Q23. Write a program which accepts a number check wheather it is perfect number or not.

# Function Name : ChkPerfect()
# Work : Accepts a number and check wheather it is perfect number or not.

def ChkPerfect(No):
    temp = 0
    flag = False
    for i in range(1,(No)):
        if(No % i == 0 ):
            temp = temp + i
        
    if(temp == No):
        flag = True
    return flag    

def main():
    value = 0

    print("Enter a Number :")
    value= int(input())
    
    Ret = ChkPerfect(value)

    if(Ret == True):
        print(f"{value} is a perfect Number..\n")
    else:
        print(f"{value} is not a perfect Number..\n")

if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
5
5 is not a perfect Number..

Enter a Number :
6
6 is a perfect Number..



"""