# Q24. Write a program which accepts a number and prints binary equivalant

# Function Name : Binary()
# Work : Accepts a number and prints binary equivalant

def Binary(No):
    num = 1
    Data = []

    while (No != 0):
        Bin = No % 2
        temp = Bin
        No = No // 2
        Data.append(temp)
    
    for i in reversed(Data):
        print(i,end ="")

    print("\n")


def main():
    value = 0

    print("Enter a Number :")
    value= int(input())
    
    Binary(value)


if __name__ == "__main__":
    main()


"""
Output:

Enter a Number :
10
1010

Enter a Number :
5
101

"""