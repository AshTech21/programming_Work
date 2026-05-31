////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accept number from user and return multiplication of all its factors.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt =0;
    int iMult=1;
    for (iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult=iMult * iCnt;
        }
    }
    return iMult; 
}
int main()
{
    int iValue= 0;
    int iRet = 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("The multiplication of factors is: %d\n",iRet);
    return 0;
}


/*

output:
Enter a Number: 12
The multiplication of factors is: 144

*/