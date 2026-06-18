//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program to calculate the power of a number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void calculatePower(int base , int exp)
    {
        int iResult = 1;
        for(int i = 0; i < exp; i++)
        {
            iResult *= base;
        }
        System.out.println(base + " raised to the power of " + exp + " is: " + iResult);
    }
}
class AS19_Q5_PowerOfNumber
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 3);
    }
}


/*

Output :
2 raised to the power of 3 is: 8

*/

