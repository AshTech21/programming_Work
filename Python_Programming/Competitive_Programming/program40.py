# Q40. Write a lambda function using reduce() which accepts a list of numbers and returns the Maximum element.

# lambda Function Name : Max().
# used reduce() function.
# Work : accepts list of numbers and returns the Mamimum element

from functools import reduce

Max = lambda No1 , No2 : No1 if No1 > No2 else No2

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

    RData = reduce(Max , Data)

    print("Data After using reduce() function :")
    print("Maximum number is :", RData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
4
Enter the elements :
34324
322356
67768768
6576576 
Data : [34324, 322356, 67768768, 6576576]
Data After using reduce() function :
Maximum number is : 67768768

"""