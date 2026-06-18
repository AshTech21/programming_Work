//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Wrtie a program to print multiplication table of given number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void PrintTable(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= 10; iCnt++)
        {
           System.out.println(iCnt*iNo);
        }
    }
}
class AS17_Q5_MultiplicationTable 
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        System.out.println("Multiplication table of 5 is :");
        obj.PrintTable(5);
    }
    
}


/*

Output :

Multiplication table of 5 is :
5
10
15
20
25
30
35
40
45
50


*/
