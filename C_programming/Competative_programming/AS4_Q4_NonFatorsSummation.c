////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q4. Write a program which accept number from user and return summation of all its non factors.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt =0;
    int iSum=0;

    for (iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
   return iSum; 
}
int main()
{
    int iValue= 0;
    int iRet = 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);
    iRet = SumNonFact(iValue);
    printf("Sum of non-factors is: %d\n", iRet);
    return 0;
}


/*

output:

Enter a Number: 12
Sum of non-factors is: 50

*/