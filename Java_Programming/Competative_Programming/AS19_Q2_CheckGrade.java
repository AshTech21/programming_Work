//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program to check the grade of a student based on the marks obtained.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void checkGrade(int iMarks)
    {
        if(iMarks >= 90)
        {
            System.out.println("Grade: A");
        }
        else if(iMarks >= 80)
        {
            System.out.println("Grade: B");
        }
        else if(iMarks >= 70)
        {
            System.out.println("Grade: C");
        }
        else
        {
            System.out.println("Grade: D");
        }
    }
}
class AS19_Q2_CheckGrade
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkGrade(85);
    }
}


/*

Output :
Grade: B

*/
