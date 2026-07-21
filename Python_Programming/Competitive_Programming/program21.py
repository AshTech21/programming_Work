# Q21. Write a program which accepts length and width of rectangle and prints area

# Function Name : AreaOfRectangle()
# Work : length and width of rectangle and prints area.

def AreaOfRectangle(len , wid):
   area = float(len * wid)
   return area

def main():
    length = 0.0
    width = 0.0

    print("Enter length :")
    length = float(input())

    print("Enter width :")
    width = float(input())
    
    Ret = AreaOfRectangle(length,width)
    print("Area of Rectangle :" ,Ret)

if __name__ == "__main__":
    main()


"""
Output:

Enter lenght :
5.5
Enter width :
7.8
Area of Rectangle : 42.9


"""