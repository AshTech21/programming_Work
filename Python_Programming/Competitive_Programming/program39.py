# Q39. Write a lambda function using reduce() which accepts a list of numbers and returns the addition of all elements.

# lambda Function Name : Addition().
# used reduce() function.
# Work : accepts list of numbers and returns the addition of all elements.

from functools import reduce

Addition = lambda No1, No2 : No1 + No2

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

    RData = reduce(Addition , Data)

    print("Data After using reduce() function :")
    print("Addition is :", RData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
5
Enter the elements :
10
20
30
40
50
Data : [10, 20, 30, 40, 50]
Data After using reduce() function :
Addition is : 150

"""