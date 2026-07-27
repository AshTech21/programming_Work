# Q38. Write a lambda function using filter() which accepts a list of numbers and returns a list of Odd numbers.

# lambda Function Name : Odd().
# used filter() function.
# Work : Accepts a list of numbers and gives list of Odd number.

ChkOdd = lambda No : (No % 2 != 0)

def main():
    
    value = 0
    Data = []

    print("Enter Number of elements:")
    value = int(input())

    print("Enter the elements :")
    for i in range(value):
        temp = int(input())
        Data.append(temp)
    print("Data :",Data)

    FData = list(filter(ChkOdd , Data))

    print("Data After using filter() function :",FData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
5
Enter the elements :
10
20
35
13
45
Data : [10, 20, 35, 13, 45]
Data After using filter() function : [35, 13, 45]

"""