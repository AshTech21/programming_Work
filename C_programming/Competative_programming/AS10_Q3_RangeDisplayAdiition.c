//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q1. Write a program which accepts two numbers from user and display all numbers in between them.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int RangeSum(int iStart ,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {

    if((iStart > iEnd) || (iStart <0))
    {
        printf("Invalid Range\n");
        break;
    }
        iSum = iSum + iCnt;
    }
    return iSum;

}
int main()
{
    int iValue1 =0 , iValue2 = 0, iRet = 0;
    printf("Enter Starting Point: ");
    scanf("%d",&iValue1);
    printf("Enter Ending Point: ");
    scanf("%d",&iValue2);
    iRet = RangeSum(iValue1,iValue2);
    printf("Sum of numbers in the given range is: %d\n", iRet);
    return 0; 
}

/*
output:

Enter Starting Point: 23 
Enter Ending Point: 30
Sum of numbers in the given range is: 212

Enter Starting Point: -10
Enter Ending Point: 5
Invalid Range
Sum of numbers in the given range is: 0

*/