# Q42. Write a lambda function using filter() which accepts a list of strings having length greater than 5 

# lambda Function Name : ChkStrSize().
# used filter() function.
# Work : accepts list of strings having length greater than 5 

ChkStrSize = lambda str : str if (len(str)>5) else 0

def main():
    
    value = 0
    Data = []

    print("Enter Number of elements:")
    value = int(input())

    print("Enter the elements :")
    for i in range(value):
        temp = input()
        Data.append(temp)
    print("Data :",Data)

    FData = list(filter(ChkStrSize , Data))

    print("Data After using filter() function \n")
    print("Minimum number is :", FData)

    
if __name__ == "__main__":
    main()


"""
output:

Enter Number of elements:
4
Enter the elements :
Rakesh
Aniket
Ashwin
jay
Data : ['Rakesh', 'Aniket', 'Ashwin', 'jay']
Data After using filter() function 

Minimum number is : ['Rakesh', 'Aniket', 'Ashwin']


"""