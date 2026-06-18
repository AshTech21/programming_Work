//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program and print the the count of Even and Odd number between 1 to N
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void CountEvenOdd(int iNo)
    {
        int iCnt = 0 , iEven =0 , iOdd = 0;
        for (iCnt = 1 ; iCnt<=iNo ;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEven++;   
            }
            else
            {
                iOdd++;
            }
        }
        System.out.println("The Count of Even numbers is : "+iEven);
        System.out.println("The Count of Odd numbers is : "+iOdd);
    }
}
class AS21_Q2_CountOfEvenOdd
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CountEvenOdd(50);
    }
}

/*

output :

The Count of Even numbers is : 25
The Count of Odd numbers is : 25

*/