//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2. Write a program to print all even numbers upto N.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Logic
{
    void printEvenNumbers(int iNo)
    {
        int iCnt =0;
        for(iCnt = 0;iCnt <= iNo ;iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
            
        
        }
    }

}
class AS18_Q2_NnumbersEven
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter a number to get all even numbers :");
        iValue = sobj.nextInt();
        
        Logic obj = new Logic();
        obj.printEvenNumbers(iValue);

    }
    
}


/*

Output :
Enter a number to get all even numbers :
10
0
2
4
6
8
10

*/
