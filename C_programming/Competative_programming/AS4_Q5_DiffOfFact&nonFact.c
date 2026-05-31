//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q5. Write a program which accept number from user and return difference between summation of all its factors and summation of all its non factors.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt =0;
    int iSumFact=0;
    int iSumNonFact=0;

    for (iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
   return (iSumFact - iSumNonFact); 
}
int main()
{
    int iValue= 0;
    int iRet = 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("Difference between summation of factors and non-factors is: %d\n", iRet);
    return 0;
}


/*

output:

Enter a Number: 12
Difference between summation of factors and non-factors is: -34

*/