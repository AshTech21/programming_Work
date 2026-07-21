# Q25. Write a program which accepts marks and display the grade

# Function Name : Grades()
# Work : Accepts marks and display the grade

def Grades(Marks):
   #filter:
   if(Marks < 0 ):
       print("Invalid Input... Try again\n")
       return

   if (Marks >= 75):
       print("Congratulations.. You got Distinction")
   elif(Marks >= 60):
       print("You have got First class")
   elif(Marks >= 50):
       print("You have got Second Class")
   elif(Marks < 50):
       print("Fail..")

def main():
    marks = 0

    print("Enter Marks :")
    marks = int(input())
    
    Grades(marks)


if __name__ == "__main__":
    main()


"""
Output:

Enter Marks :
80
Congratulations.. You got Distinction

Enter Marks :
50
You have got Second Class

Enter Marks :
60
You have got First class

Enter Marks :
0
Fail..

Enter Marks :
-50
Invalid Input... Try again



"""