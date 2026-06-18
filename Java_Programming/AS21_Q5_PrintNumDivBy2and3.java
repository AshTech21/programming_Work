//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program and print the numbers which are divisible by 2 & 3.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void CountFactors(int iNo)
    {
        int iCnt = 0 ;
        for (iCnt = 1 ; iCnt <= iNo ;iCnt++)
        {
            if((iCnt % 3 ==0) && (iCnt % 2 == 0))
            {
                System.out.println(iCnt);
            }
        } 
    }
}
class AS21_Q5_PrintNumDivBy2and3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        System.out.println("Numbers which are divisible by 2 & 3 are :");
        obj.CountFactors(20);
    }
}

/*

output :

Numbers which are divisible by 2 & 3 are :
6
12
18

*/