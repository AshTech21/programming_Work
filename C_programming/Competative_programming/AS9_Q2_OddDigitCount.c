//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q2.Write a program which accepts number from user and count frequency of odd digits in that number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo /10 ;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);
    iRet = CountOdd(iValue);
    printf("Count of odd digits is : %d\n",iRet);
    return 0;

}

/*

output:

Enter a Number :2395
Count of odd digits is : 3

Enter a Number :-1018
Count of odd digits is : 2

*/
