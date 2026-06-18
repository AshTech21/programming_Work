//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program and print whether a number is perfect or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
   public void CheckPerfect(int iNo)
   {
        int iCnt = 0, iSum =0;

        System.out.println("Factors of "+iNo+" are :");
        for(iCnt = 1;iCnt <= iNo/2 ; iCnt ++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt+"\t");
                iSum += iCnt;
            }
        }
        if(iSum == iNo )
        {
            System.out.println(""+iNo+" is a perfect number");
        }
        else 
        {
            System.out.println(""+iNo+" is not a perfect number");
        }
   }
}
class AS20_Q2_PerfectNumber
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckPerfect(28);
    }
}

/*

output :

Factors of 28 are :
1	
2	
4	
7	
14	
28 is a perfect number


*/