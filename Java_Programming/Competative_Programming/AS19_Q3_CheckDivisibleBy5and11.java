//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program to check the number is divisible by 5 and 11 or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void checkDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println(iNo + " is divisible by both 5 and 11");
        }
        else
        {
            System.out.println(iNo + " is not divisible by both 5 and 11");
        }
    }
}
class AS19_Q3_CheckDivisibleBy5and11
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}


/*

Output :
55 is divisible by both 5 and 11

*/
