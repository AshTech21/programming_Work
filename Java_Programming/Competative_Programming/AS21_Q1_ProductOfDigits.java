//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program and print the product of digits od a number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    public void ProductOFDigits(int iNo)
    {
        int iDigit = 0 , iCnt = 0 , iMul = 1;
        while(iNo != 0)
        {
            iDigit = iNo %10;
            iMul = iMul * iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Product of Digits is :"+iMul);
    }
}
class AS21_Q1_ProductOfDigits
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.ProductOFDigits(234);
    }
}

/*

output :

Product of Digits is :24


*/