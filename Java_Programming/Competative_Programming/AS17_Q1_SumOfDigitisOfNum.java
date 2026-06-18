//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Wrtie a program which accept number from user and return the sum of digits from that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void sumOfDigits(int iNo)
    {
        int iSum = 0 ;
        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        System.out.println("Sum of digits is : "+iSum);
    }
}
class AS17_Q1_SumOfDigitisOfNum 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
    
}


/*

Output :
Sum of digits is : 10

*/
