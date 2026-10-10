# Q43. Write a lambda function using filter() which accepts a list of numbers and returns a list of numbers divisible by both 3 and 5

# lambda Function Name : ChkDiv().
# used filter() function.
# Work : Accepts a list of numbers divisible by both 3 and 5

ChkDiv = lambda No : No if((No % 3 == 0) and (No % 5 == 0)) else 0

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

    FData = list(filter(ChkDiv , Data))

    print("Data After using filter() function :",FData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
4
Enter the elements :
125
15 
45
95 
Data : [125, 15, 45, 95]
Data After using filter() function : [15, 45]

"""