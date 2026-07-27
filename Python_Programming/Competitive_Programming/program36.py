# Q36. Write a lambda function using map() which accepts a list of numbers and returns a list of squares of each number.

# lambda Function Name : Square().
# used map() function.
# Work : Accepts a number and gives list of squares of each number.

Square = lambda No : No * No

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

    MData = list(map(Square , Data))

    print("Data After using map() function :",MData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
3
Enter the elements :
11
21
51
Data : [11, 21, 51]
Data After using map() function : [121, 441, 2601]


"""