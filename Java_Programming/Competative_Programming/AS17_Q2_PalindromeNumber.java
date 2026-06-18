//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Wrtie a program to check tha number is palindrome or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void checkPalindrome(int iNo)
    {
        int iRev = 0;
        int iTemp = iNo;
        while(iNo != 0)
        {
            iRev = iRev * 10 + (iNo % 10);
            iNo = iNo / 10;
        }
        if(iTemp == iRev)
        {
            System.out.println(iTemp +" is palindrome");
        }
        else
        {
            System.out.println(iTemp +" is not palindrome");
        }
    }
}
class AS17_Q2_PalindromeNumber 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    
    }
}



/*

Output :
121 is palindrome

*/
