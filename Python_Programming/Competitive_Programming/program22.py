# Q21. Write a program which accepts Radius of Circle and prints its area.

# Function Name : AreaOfCircle()
# Work : Accepts Radius of Circle and print its area.

def AreaOfCircle(Rad):
   area = 3.14 * Rad * Rad
   return area

def main():
    Radius = 0.0

    print("Enter a Radius:")
    Radius = float(input())
    
    Ret = AreaOfCircle(Radius)
    print("Area of Circle:" ,Ret)

if __name__ == "__main__":
    main()


"""
Output:

Enter a Radius:
12.2
Area of Circle: 467.3576



"""