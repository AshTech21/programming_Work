//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program to find the sum of all even and odd numbers upto N.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Logic
{
    void sumEvenOdd(int iNo)
    {
        int iCnt =0 , iEvenSum = 0, iOddSum = 0;

        for(iCnt = 0;iCnt <= iNo ;iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenSum = iEvenSum + iCnt;
            }
            else
            {
                iOddSum = iOddSum + iCnt;
            }
            
        }
        System.out.println("Sum of even numbers: " + iEvenSum);
        System.out.println("Sum of odd numbers: " + iOddSum);
    }

}
class AS18_Q4_NnumSumOfOddEven
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number to get all odd numbers :");
        iValue = sobj.nextInt();
        
        Logic obj = new Logic();
        obj.sumEvenOdd(iValue);

    }
    
}


/*

Output :

Enter a number to get all odd numbers :
20
Sum of even numbers: 110
Sum of odd numbers: 100

    
*/
