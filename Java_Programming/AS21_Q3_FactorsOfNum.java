//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q3. Write a program and print factors of a given numbers.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0 ;
        for (iCnt = 1 ; iCnt<=(iNo/2) ;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        } 
    }
}
class AS21_Q3_FactorsOfNum
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        System.out.println("Factors are :");
        obj.DisplayFactors(12);
    }
}

/*

output :

Factors are :
1
2
3
4
6

*/