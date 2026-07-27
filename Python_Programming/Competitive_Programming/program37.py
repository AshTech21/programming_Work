# Q37. Write a lambda function using filter() which accepts a list of numbers and returns a list of even numbers.

# lambda Function Name : Even().
# used filter() function.
# Work : Accepts a list of numbers and gives list of even number.

ChkEven = lambda No : (No % 2 == 0)

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

    FData = list(filter(ChkEven , Data))

    print("Data After using filter() function :",FData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
5
Enter the elements :
10
22
35
12
45
Data : [10, 22, 35, 12, 45]
Data After using filter() function : [10, 22, 12]


"""