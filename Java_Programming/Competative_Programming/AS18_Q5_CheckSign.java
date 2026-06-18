//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program to check whether the number is palindrome or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void checkSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Number is positive");
        }
        else if(iNo < 0)
        {
            System.out.println("Number is negative");
        }
        else
        {
            System.out.println("Number is zero");
        }
    }
}
class AS18_Q5_CheckSign
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-10);
    
    }
}



/*

Output :
Number is negative


*/
