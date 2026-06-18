//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program to print all even numbers upto N.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Logic
{
    void printOddNumbers(int iNo)
    {
        int iCnt =0;
        for(iCnt = 0;iCnt <= iNo ;iCnt ++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
            
        
        }
    }

}
class AS18_Q3_NnumbersOdd
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number to get all odd numbers :");
        iValue = sobj.nextInt();
        
        Logic obj = new Logic();
        obj.printOddNumbers(iValue);

    }
    
}


/*

Output :

Enter a number to get all odd numbers :
10
1
3
5
7
9
    
*/
