//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Wrtie a program to check the number is prime or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }
        if(iCnt > (iNo/2))
        {
            System.out.println(iNo +" is prime number");
        }
        else
        {
            System.out.println(iNo +" is not prime number");
        }

    }

}
class AS18_Q1_CheckPrime 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(7);
    }
    
}


/*

Output :
7 is prime number

*/
