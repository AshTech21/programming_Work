//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program to check whether the number is leap year or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void checkLeapYear(int iNo)
    {
        if((iNo % 4 == 0) && (iNo % 100 != 0) || (iNo % 400 == 0))
        {
            System.out.println(iNo + " is a leap year");
        }
        else
        {
            System.out.println(iNo + " is not a leap year");
        }
    }
}
class AS19_Q1_LeapYear
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2020);
    
    }

}



/*

Output :
2020 is a leap year


*/
