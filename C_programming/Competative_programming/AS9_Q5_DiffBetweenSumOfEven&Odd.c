//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5.Write a program which accpet number from user and return difference between summation
//    of even and odd digits in that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountDiff(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo /10 ;
    }
    return (iEvenSum - iOddSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("Difference between sum of even and odd digits is : %d\n",iRet);
    return 0;

}

/*

output:

Enter a Number :2395
Difference between sum of even and odd digits is : -15

Enter a Number :751
Difference between sum of even and odd digits is : -13


*/
