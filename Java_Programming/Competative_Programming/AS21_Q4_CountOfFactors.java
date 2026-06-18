//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program and print the count offactors of a given numbers.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void CountFactors(int iNo)
    {
        int iCnt = 0 ,iCount = 0;
        for (iCnt = 1 ; iCnt<=(iNo/2) ;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        } 
        System.out.println(iCount);
    }
}
class AS21_Q4_CountOfFactors
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        System.out.println("Count of Factors are :");
        obj.CountFactors(20);
    }
}

/*

output :

Count of Factors are :
5


*/