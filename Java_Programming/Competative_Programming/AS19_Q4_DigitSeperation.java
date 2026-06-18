//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program to print each digit of a number seperately.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void printDigits(int iNo)
    {
        while(iNo != 0)
        {
            int iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}
class AS19_Q4_DigitSeperation
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        System.out.println("Digits of the number:");
        obj.printDigits(12345);
    }
}


/*

Output :
Digits of the number:
5
4
3
2
1


*/

