//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program and print the smallest digit from given number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void FindSmallestDigit(int iNo)
    {
        int iDigit = 0 , iCnt = 0 ,iMin = iNo; //
        while(iNo != 0)
        {
            iDigit = iNo %10;
            if(iDigit <= iMin)
            {
                iMin = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("The smallest digit is: " + iMin);
    }
}
class AS20_Q5_SmallestNo
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindSmallestDigit(45872);
    }
}

/*

output :

The smallest digit is: 2



*/