//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program and print the largest digit from given number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void FindLargestDigit(int iNo)
    {
        int iDigit = 0 , iCnt = 0 ,iMax = 0;
        while(iNo != 0)
        {
            iDigit = iNo %10;
            if(iDigit >= iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("The largest digit is: " + iMax);
    }
}
class AS20_Q4_LargestNo
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.FindLargestDigit(83429);
    }
}

/*

output :

The largest digit is: 9


*/