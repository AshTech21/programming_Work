# Q41. Write a lambda function using reduce() which accepts a list of numbers and returns the Minimum element.

# lambda Function Name : Min().
# used reduce() function.
# Work : accepts list of numbers and returns the Minimu element

from functools import reduce

Min = lambda No1 , No2 : No1 if No1 < No2 else No2

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

    RData = reduce(Min , Data)

    print("Data After using reduce() function ")
    print("Minimum number is :", RData)

    
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
Data After using reduce() function 
Minimum number is : 10


"""